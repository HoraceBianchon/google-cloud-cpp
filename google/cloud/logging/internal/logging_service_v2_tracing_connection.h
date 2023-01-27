// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_TRACING_CONNECTION_H

#include "google/cloud/logging/logging_service_v2_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class LoggingServiceV2TracingConnection
    : public logging::LoggingServiceV2Connection {
 public:
  ~LoggingServiceV2TracingConnection() override = default;

  explicit LoggingServiceV2TracingConnection(
      std::shared_ptr<logging::LoggingServiceV2Connection> child);

  Options options() override { return child_->options(); }

  Status DeleteLog(
      google::logging::v2::DeleteLogRequest const& request) override;

  StatusOr<google::logging::v2::WriteLogEntriesResponse> WriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request) override;

  StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      google::logging::v2::ListLogEntriesRequest request) override;

  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::logging::v2::ListMonitoredResourceDescriptorsRequest request)
      override;

  StreamRange<std::string> ListLogs(
      google::logging::v2::ListLogsRequest request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::logging::v2::TailLogEntriesRequest,
      google::logging::v2::TailLogEntriesResponse>>
  AsyncTailLogEntries() override;

  future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
  AsyncWriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request) override;

 private:
  std::shared_ptr<logging::LoggingServiceV2Connection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<logging::LoggingServiceV2Connection>
MakeLoggingServiceV2TracingConnection(
    std::shared_ptr<logging::LoggingServiceV2Connection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_TRACING_CONNECTION_H
