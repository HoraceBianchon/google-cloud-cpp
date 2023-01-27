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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/assuredworkloads/assured_workloads_options.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_connection_impl.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_option_defaults.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_stub_factory.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceConnection::~AssuredWorkloadsServiceConnection() =
    default;

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceConnection::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::assuredworkloads::v1::Workload>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceConnection::RestrictAllowedResources(
    google::cloud::assuredworkloads::v1::
        RestrictAllowedResourcesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AssuredWorkloadsServiceConnection::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnection::ListWorkloads(
    google::cloud::assuredworkloads::v1::
        ListWorkloadsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Workload>>();
}

StreamRange<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnection::ListViolations(
    google::cloud::assuredworkloads::v1::
        ListViolationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Violation>>();
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnection::GetViolation(
    google::cloud::assuredworkloads::v1::GetViolationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceConnection::AcknowledgeViolation(
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AssuredWorkloadsServicePolicyOptionList>(
      options, __func__);
  options = assuredworkloads_internal::AssuredWorkloadsServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      assuredworkloads_internal::CreateDefaultAssuredWorkloadsServiceStub(
          background->cq(), options);
  return assuredworkloads_internal::
      MakeAssuredWorkloadsServiceTracingConnection(
          std::make_shared<
              assuredworkloads_internal::AssuredWorkloadsServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google
