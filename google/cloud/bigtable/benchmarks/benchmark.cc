// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/bigtable/benchmarks/benchmark.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_client.h"
#include "google/cloud/bigtable/benchmarks/random_mutation.h"
#include "google/cloud/bigtable/resource_names.h"
#include "google/cloud/internal/background_threads_impl.h"
#include "google/cloud/internal/getenv.h"
#include <future>
#include <iomanip>
#include <sstream>

namespace {
double const kResultPercentiles[] = {0, 50, 90, 95, 99, 99.9, 100};
}  // anonymous namespace

namespace google {
namespace cloud {
namespace bigtable {
namespace benchmarks {
using ::google::cloud::internal::GetEnv;

google::cloud::StatusOr<BenchmarkOptions> ParseArgs(
    int& argc, char* argv[], std::string const& description) {
  bool auto_run =
      google::cloud::internal::GetEnv("GOOGLE_CLOUD_CPP_AUTO_RUN_EXAMPLES")
          .value_or("") == "yes";
  if (argc == 1 && auto_run) {
    for (auto const& var : {"GOOGLE_CLOUD_PROJECT",
                            "GOOGLE_CLOUD_CPP_BIGTABLE_TEST_INSTANCE_ID"}) {
      auto const value = GetEnv(var).value_or("");
      if (!value.empty()) continue;
      std::ostringstream os;
      os << "The environment variable " << var << " is not set or empty";
      return google::cloud::Status(google::cloud::StatusCode::kUnknown,
                                   std::move(os).str());
    }
    auto const project_id = GetEnv("GOOGLE_CLOUD_PROJECT").value();
    auto const instance_id =
        GetEnv("GOOGLE_CLOUD_CPP_BIGTABLE_TEST_INSTANCE_ID").value();
    // Table size must be > 10,000 or scan_throughput_benchmark crashes on
    // Windows
    return ParseBenchmarkOptions(
        {
            std::string(argv[0]),
            "--project-id=" + project_id,
            "--instance-id=" + instance_id,
            "--app-profile-id=default",
            "--thread-count=1",
            "--test-duration=1s",
            "--table-size=11000",
        },
        description);
  }

  return ParseBenchmarkOptions({argv, argv + argc}, description);
}

Benchmark::Benchmark(BenchmarkOptions options)
    : options_(std::move(options)), key_width_(KeyWidth()) {
  opts_.set<GrpcNumChannelsOption>(options_.thread_count);
  if (options_.use_embedded_server) {
    server_ = CreateEmbeddedServer();
    std::string address = server_->address();
    std::cout << "Running embedded Cloud Bigtable server at " << address
              << "\n";
    server_thread_ = std::thread([this]() { server_->Wait(); });

    opts_.set<GrpcCredentialOption>(grpc::InsecureChannelCredentials())
        .set<EndpointOption>(address);
  }
}

Benchmark::~Benchmark() {
  if (!server_) {
    return;
  }
  server_->Shutdown();
  if (!server_thread_.joinable()) {
    return;
  }
  server_thread_.join();
}

std::string Benchmark::CreateTable() {
  // Create the table, with an initial split.
  auto admin = bigtable_admin::BigtableTableAdminClient(
      bigtable_admin::MakeBigtableTableAdminConnection(opts_));

  google::bigtable::admin::v2::CreateTableRequest r;
  r.set_parent(InstanceName(options_.project_id, options_.instance_id));
  r.set_table_id(options_.table_id);
  for (auto i = 0; i != 10; i++) {
    r.add_initial_splits()->set_key("user" + std::to_string(i));
  }
  auto& families = *r.mutable_table()->mutable_column_families();
  families[kColumnFamily].mutable_gc_rule()->set_max_num_versions(1);

  (void)admin.CreateTable(std::move(r));
  return options_.table_id;
}

void Benchmark::DeleteTable() {
  auto admin = bigtable_admin::BigtableTableAdminClient(
      bigtable_admin::MakeBigtableTableAdminConnection(opts_));
  auto status = admin.DeleteTable(
      TableName(options_.project_id, options_.instance_id, options_.table_id));
  if (!status.ok()) {
    std::cerr << "Failed to delete table: " << status
              << ". Continuing anyway.\n";
  }
}

Table Benchmark::MakeTable() const {
  auto table_opts = Options{}.set<AppProfileIdOption>(options_.app_profile_id);
  return Table(MakeDataConnection(opts_),
               TableResource(options_.project_id, options_.instance_id,
                             options_.table_id),
               std::move(table_opts));
}

google::cloud::StatusOr<BenchmarkResult> Benchmark::PopulateTable() {
  auto table = MakeTable();
  std::cout << "# Populating table " << options_.table_id << " " << std::flush;
  std::vector<std::future<google::cloud::StatusOr<BenchmarkResult>>> tasks;
  auto upload_start = std::chrono::steady_clock::now();
  auto table_size = options_.table_size;
  std::int64_t shard_start = 0;
  for (int i = 0; i != kPopulateShardCount; ++i) {
    auto end =
        std::min(table_size, shard_start + table_size / kPopulateShardCount);
    tasks.emplace_back(std::async(std::launch::async,
                                  &Benchmark::PopulateTableShard, this,
                                  std::ref(table), shard_start, end));
    shard_start = end;
  }

  BenchmarkResult result{};
  int count = 0;
  for (auto& t : tasks) {
    auto shard_result = t.get();
    if (!shard_result) {
      std::cerr << "Exception raised by PopulateTask/" << count
                << "]: " << shard_result.status() << "\n";
    } else {
      result.row_count += shard_result->row_count;
      result.operations.insert(result.operations.end(),
                               shard_result->operations.begin(),
                               shard_result->operations.end());
    }
    ++count;
  }
  using std::chrono::duration_cast;
  result.elapsed = duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - upload_start);
  std::cout << " DONE. Elapsed=" << FormatDuration(result.elapsed)
            << ", Ops=" << result.operations.size()
            << ", Rows=" << result.row_count << "\n";
  return result;
}

std::string Benchmark::MakeRandomKey(
    google::cloud::internal::DefaultPRNG& gen) const {
  std::uniform_int_distribution<std::int64_t> prng_user(
      0, options_.table_size - 1);
  return MakeKey(prng_user(gen));
}

std::string Benchmark::MakeKey(std::int64_t id) const {
  std::ostringstream os;
  os << "user" << std::setw(key_width_) << std::setfill('0') << id;
  return os.str();
}

void Benchmark::PrintThroughputResult(std::ostream& os, std::string const&,
                                      std::string const& phase,
                                      BenchmarkResult const& result) {
  auto row_throughput = 1000 * result.row_count / result.elapsed.count();
  os << "# " << phase << " row throughput=" << row_throughput << " rows/s\n";
  auto ops_throughput =
      1000 * result.operations.size() / result.elapsed.count();
  os << "# " << phase << " op throughput=" << ops_throughput << " ops/s\n";
}

void Benchmark::PrintLatencyResult(std::ostream& os,
                                   std::string const& test_name,
                                   std::string const& operation,
                                   BenchmarkResult& result) {
  if (result.operations.empty()) {
    os << "# Test=" << test_name << ", " << operation << " no results\n";
    return;
  }
  std::sort(result.operations.begin(), result.operations.end(),
            [](OperationResult const& lhs, OperationResult const& rhs) {
              return lhs.latency < rhs.latency;
            });
  auto const nsamples = result.operations.size();
  auto ops_throughput = 1000 * nsamples / result.elapsed.count();
  os << "# Test=" << test_name << ", " << operation
     << " Throughput = " << ops_throughput << " ops/s, Latency: ";
  char const* sep = "";
  for (double p : kResultPercentiles) {
    auto index = static_cast<std::size_t>(
        std::round(static_cast<double>(nsamples - 1) * p / 100.0));
    auto i = result.operations.begin();
    std::advance(i, index);
    os << sep << "p" << std::setprecision(3) << p << "=" << std::setprecision(2)
       << FormatDuration(i->latency);
    sep = ", ";
  }
  os << "\n";
}

std::string Benchmark::ResultsCsvHeader() {
  return "name,start,op.name,measurement,nsamples,min,p50,p90,p95,p99,p99.9,max"
         ",units,throughput.rows,throughput.ops,notes";
}

void Benchmark::PrintResultCsv(std::ostream& os, std::string const& test_name,
                               std::string const& op_name,
                               std::string const& measurement,
                               BenchmarkResult& result) const {
  if (result.operations.empty()) {
    os << "# Test=" << test_name << ", " << op_name << " no results\n";
    return;
  }
  std::sort(result.operations.begin(), result.operations.end(),
            [](OperationResult const& lhs, OperationResult const& rhs) {
              return lhs.latency < rhs.latency;
            });
  auto const nsamples = result.operations.size();
  os << test_name << "," << options_.start_time << "," << op_name << ","
     << measurement << "," << nsamples;
  for (double p : kResultPercentiles) {
    auto index = static_cast<std::size_t>(
        std::round(static_cast<double>(nsamples - 1) * p / 100.0));
    auto i = result.operations.begin();
    std::advance(i, index);
    os << "," << i->latency.count();
  }
  auto row_throughput = 1000 * result.row_count / result.elapsed.count();
  auto ops_throughput =
      1000 * result.operations.size() / result.elapsed.count();

  os << ",us," << row_throughput << "," << ops_throughput << ","
     << options_.notes << "\n";
}

int Benchmark::create_table_count() const {
  if (!server_) {
    return 0;
  }
  return server_->create_table_count();
}

int Benchmark::delete_table_count() const {
  if (!server_) {
    return 0;
  }
  return server_->delete_table_count();
}

int Benchmark::mutate_row_count() const {
  if (!server_) {
    return 0;
  }
  return server_->mutate_row_count();
}

int Benchmark::mutate_rows_count() const {
  if (!server_) {
    return 0;
  }
  return server_->mutate_rows_count();
}

int Benchmark::read_rows_count() const {
  if (!server_) {
    return 0;
  }
  return server_->read_rows_count();
}

void Benchmark::DisableBackgroundThreads(CompletionQueue& cq) {
  opts_.set<GrpcCompletionQueueOption>(cq);
}

google::cloud::StatusOr<BenchmarkResult> Benchmark::PopulateTableShard(
    bigtable::Table& table, std::int64_t begin, std::int64_t end) const {
  auto start = std::chrono::steady_clock::now();
  BenchmarkResult result{};

  auto generator = google::cloud::internal::MakeDefaultPRNG();
  int bulk_size = 0;
  bigtable::BulkMutation bulk;

  auto progress_period = (end - begin) / kPopulateShardProgressMarks;
  if (progress_period == 0) {
    progress_period = (end - begin);
  }
  for (auto idx = begin; idx != end; ++idx) {
    bigtable::SingleRowMutation mutation(MakeKey(idx));
    std::vector<bigtable::Mutation> columns;
    for (int f = 0; f != kNumFields; ++f) {
      mutation.emplace_back(MakeRandomMutation(generator, f));
    }
    bulk.emplace_back(std::move(mutation));
    if (++bulk_size >= kBulkSize) {
      auto t = TimeOperation([&table, &bulk]() {
        auto failures = table.BulkApply(std::move(bulk));
        if (!failures.empty()) {
          auto status = failures.front().status();
          return status;
        }
        return google::cloud::Status{};
      });
      result.row_count += bulk_size;
      result.operations.emplace_back(t);
      bulk = {};
      bulk_size = 0;
    }
    auto count = idx - begin + 1;
    if (count % progress_period == 0) {
      std::cout << "." << std::flush;
    }
  }
  if (bulk_size != 0) {
    auto t = TimeOperation([&table, &bulk]() {
      auto failures = table.BulkApply(std::move(bulk));
      if (!failures.empty()) {
        auto status = failures.front().status();
        return status;
      }
      return google::cloud::Status{};
    });
    result.row_count += bulk_size;
    result.operations.emplace_back(t);
  }
  using std::chrono::duration_cast;
  result.elapsed = duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - start);
  return result;
}

int Benchmark::KeyWidth() const {
  int r = 1;
  for (auto tsize = options_.table_size; tsize > 0; tsize /= 10, ++r) {
  }
  return r;
}

std::ostream& operator<<(std::ostream& os, FormatDuration duration) {
  auto nanos = duration.ns;
  // For sub-microsecond ranges just print the number of nanoseconds.
  if (nanos < std::chrono::microseconds(1)) {
    return os << nanos.count() << "ns";
  }
  // For sub-millisecond values print 123.456us, that is the number of
  // microseconds.  Formatting with iostreams is not hard, but resetting them
  // back is super tedious, so just use std::snprintf().
  if (nanos < std::chrono::milliseconds(1)) {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.03fus",
                  static_cast<double>(nanos.count()) / 1000.0);
    return os << buf;
  }
  // For sub-second values print 123.456ms, that is, the number of milliseconds.
  if (nanos < std::chrono::seconds(1)) {
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(nanos);
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.03fms",
                  static_cast<double>(us.count()) / 1000.0);
    return os << buf;
  }

  // In general, print something like 12h34m56.789s, though we omit the hours,
  // minutes, or seconds if they are 0.
  auto hh = std::chrono::duration_cast<std::chrono::hours>(duration.ns);
  if (hh.count() != 0) {
    os << hh.count() << "h";
  }
  nanos = nanos - hh;
  auto mm = std::chrono::duration_cast<std::chrono::minutes>(nanos);
  if (mm.count() != 0) {
    os << mm.count() << "m";
  }
  nanos = nanos - mm;
  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(nanos);
  if (ms.count() == 0) {
    return os;
  }
  if (ms.count() % 1000 == 0) {
    return os << ms.count() / 1000 << "s";
  }
  char buf[32];
  std::snprintf(buf, sizeof(buf), "%.03fs",
                static_cast<double>(ms.count()) / 1000.0);
  return os << buf;
}

}  // namespace benchmarks
}  // namespace bigtable
}  // namespace cloud
}  // namespace google
