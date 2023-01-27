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

#include "google/cloud/dialogflow_es/environments_connection.h"
#include "google/cloud/dialogflow_es/environments_options.h"
#include "google/cloud/dialogflow_es/internal/environments_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/environments_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/environments_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/environments_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsConnection::~EnvironmentsConnection() = default;

StreamRange<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnection::ListEnvironments(
    google::cloud::dialogflow::v2::
        ListEnvironmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Environment>>();
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnection::GetEnvironment(
    google::cloud::dialogflow::v2::GetEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnection::CreateEnvironment(
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsConnection::UpdateEnvironment(
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status EnvironmentsConnection::DeleteEnvironment(
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
EnvironmentsConnection::GetEnvironmentHistory(
    google::cloud::dialogflow::v2::
        GetEnvironmentHistoryRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>>();
}

std::shared_ptr<EnvironmentsConnection> MakeEnvironmentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 EnvironmentsPolicyOptionList>(options,
                                                               __func__);
  options = dialogflow_es_internal::EnvironmentsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_es_internal::CreateDefaultEnvironmentsStub(
      background->cq(), options);
  return dialogflow_es_internal::MakeEnvironmentsTracingConnection(
      std::make_shared<dialogflow_es_internal::EnvironmentsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<EnvironmentsConnection> MakeEnvironmentsConnection(
    Options options) {
  return MakeEnvironmentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
