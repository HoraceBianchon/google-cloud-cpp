// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/reachability_connection.h"
#include "google/cloud/networkmanagement/internal/reachability_connection_impl.h"
#include "google/cloud/networkmanagement/internal/reachability_option_defaults.h"
#include "google/cloud/networkmanagement/internal/reachability_stub_factory.h"
#include "google/cloud/networkmanagement/internal/reachability_tracing_connection.h"
#include "google/cloud/networkmanagement/reachability_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkmanagement {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReachabilityServiceConnection::~ReachabilityServiceConnection() = default;

StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceConnection::ListConnectivityTests(
    google::cloud::networkmanagement::v1::
        ListConnectivityTestsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>>();
}

StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceConnection::GetConnectivityTest(
    google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnection::CreateConnectivityTest(
    google::cloud::networkmanagement::v1::
        CreateConnectivityTestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnection::UpdateConnectivityTest(
    google::cloud::networkmanagement::v1::
        UpdateConnectivityTestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnection::RerunConnectivityTest(
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
ReachabilityServiceConnection::DeleteConnectivityTest(
    google::cloud::networkmanagement::v1::
        DeleteConnectivityTestRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ReachabilityServiceConnection>
MakeReachabilityServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ReachabilityServicePolicyOptionList>(options,
                                                                      __func__);
  options = networkmanagement_internal::ReachabilityServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = networkmanagement_internal::CreateDefaultReachabilityServiceStub(
      background->cq(), options);
  return networkmanagement_internal::MakeReachabilityServiceTracingConnection(
      std::make_shared<
          networkmanagement_internal::ReachabilityServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement
}  // namespace cloud
}  // namespace google
