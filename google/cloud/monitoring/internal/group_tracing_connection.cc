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
// source: google/monitoring/v3/group_service.proto

#include "google/cloud/monitoring/internal/group_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GroupServiceTracingConnection::GroupServiceTracingConnection(
    std::shared_ptr<monitoring::GroupServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::monitoring::v3::Group>
GroupServiceTracingConnection::ListGroups(
    google::monitoring::v3::ListGroupsRequest request) {
  auto span =
      internal::MakeSpan("monitoring::GroupServiceConnection::ListGroups");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListGroups(std::move(request));
  return internal::MakeTracedStreamRange<google::monitoring::v3::Group>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::monitoring::v3::Group> GroupServiceTracingConnection::GetGroup(
    google::monitoring::v3::GetGroupRequest const& request) {
  auto span =
      internal::MakeSpan("monitoring::GroupServiceConnection::GetGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGroup(request));
}

StatusOr<google::monitoring::v3::Group>
GroupServiceTracingConnection::CreateGroup(
    google::monitoring::v3::CreateGroupRequest const& request) {
  auto span =
      internal::MakeSpan("monitoring::GroupServiceConnection::CreateGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateGroup(request));
}

StatusOr<google::monitoring::v3::Group>
GroupServiceTracingConnection::UpdateGroup(
    google::monitoring::v3::UpdateGroupRequest const& request) {
  auto span =
      internal::MakeSpan("monitoring::GroupServiceConnection::UpdateGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateGroup(request));
}

Status GroupServiceTracingConnection::DeleteGroup(
    google::monitoring::v3::DeleteGroupRequest const& request) {
  auto span =
      internal::MakeSpan("monitoring::GroupServiceConnection::DeleteGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteGroup(request));
}

StreamRange<google::api::MonitoredResource>
GroupServiceTracingConnection::ListGroupMembers(
    google::monitoring::v3::ListGroupMembersRequest request) {
  auto span = internal::MakeSpan(
      "monitoring::GroupServiceConnection::ListGroupMembers");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListGroupMembers(std::move(request));
  return internal::MakeTracedStreamRange<google::api::MonitoredResource>(
      std::move(span), std::move(scope), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<monitoring::GroupServiceConnection>
MakeGroupServiceTracingConnection(
    std::shared_ptr<monitoring::GroupServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<GroupServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
