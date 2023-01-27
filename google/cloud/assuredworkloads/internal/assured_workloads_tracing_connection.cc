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

#include "google/cloud/assuredworkloads/internal/assured_workloads_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AssuredWorkloadsServiceTracingConnection::
    AssuredWorkloadsServiceTracingConnection(
        std::shared_ptr<assuredworkloads::AssuredWorkloadsServiceConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceTracingConnection::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  return child_->CreateWorkload(request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceTracingConnection::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::UpdateWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateWorkload(request));
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceTracingConnection::RestrictAllowedResources(
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::"
      "RestrictAllowedResources");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RestrictAllowedResources(request));
}

Status AssuredWorkloadsServiceTracingConnection::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::DeleteWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteWorkload(request));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceTracingConnection::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::GetWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetWorkload(request));
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceTracingConnection::ListWorkloads(
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::ListWorkloads");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListWorkloads(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::assuredworkloads::v1::Workload>(
      std::move(span), std::move(scope), std::move(sr));
}

StreamRange<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceTracingConnection::ListViolations(
    google::cloud::assuredworkloads::v1::ListViolationsRequest request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::ListViolations");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListViolations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::assuredworkloads::v1::Violation>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceTracingConnection::GetViolation(
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::GetViolation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetViolation(request));
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceTracingConnection::AcknowledgeViolation(
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "assuredworkloads::AssuredWorkloadsServiceConnection::"
      "AcknowledgeViolation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AcknowledgeViolation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<assuredworkloads::AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceTracingConnection(
    std::shared_ptr<assuredworkloads::AssuredWorkloadsServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AssuredWorkloadsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google
