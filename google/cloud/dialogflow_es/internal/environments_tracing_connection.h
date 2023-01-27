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
// source: google/cloud/dialogflow/v2/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/environments_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EnvironmentsTracingConnection
    : public dialogflow_es::EnvironmentsConnection {
 public:
  ~EnvironmentsTracingConnection() override = default;

  explicit EnvironmentsTracingConnection(
      std::shared_ptr<dialogflow_es::EnvironmentsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::v2::Environment> ListEnvironments(
      google::cloud::dialogflow::v2::ListEnvironmentsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Environment> GetEnvironment(
      google::cloud::dialogflow::v2::GetEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Environment> CreateEnvironment(
      google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Environment> UpdateEnvironment(
      google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request)
      override;

  Status DeleteEnvironment(
      google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
  GetEnvironmentHistory(
      google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request)
      override;

 private:
  std::shared_ptr<dialogflow_es::EnvironmentsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_es::EnvironmentsConnection>
MakeEnvironmentsTracingConnection(
    std::shared_ptr<dialogflow_es::EnvironmentsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_TRACING_CONNECTION_H
