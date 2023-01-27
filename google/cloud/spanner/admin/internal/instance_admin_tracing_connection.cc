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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstanceAdminTracingConnection::InstanceAdminTracingConnection(
    std::shared_ptr<spanner_admin::InstanceAdminConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminTracingConnection::ListInstanceConfigs(
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::ListInstanceConfigs");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListInstanceConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::spanner::admin::instance::v1::InstanceConfig>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminTracingConnection::GetInstanceConfig(
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::GetInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceConfig(request));
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminTracingConnection::CreateInstanceConfig(
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  return child_->CreateInstanceConfig(request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminTracingConnection::UpdateInstanceConfig(
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  return child_->UpdateInstanceConfig(request);
}

Status InstanceAdminTracingConnection::DeleteInstanceConfig(
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::DeleteInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteInstanceConfig(request));
}

StreamRange<google::longrunning::Operation>
InstanceAdminTracingConnection::ListInstanceConfigOperations(
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::ListInstanceConfigOperations");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListInstanceConfigOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(scope), std::move(sr));
}

StreamRange<google::spanner::admin::instance::v1::Instance>
InstanceAdminTracingConnection::ListInstances(
    google::spanner::admin::instance::v1::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::ListInstances");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::spanner::admin::instance::v1::Instance>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminTracingConnection::GetInstance(
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::InstanceAdminConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminTracingConnection::CreateInstance(
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  return child_->CreateInstance(request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminTracingConnection::UpdateInstance(
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  return child_->UpdateInstance(request);
}

Status InstanceAdminTracingConnection::DeleteInstance(
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteInstance(request));
}

StatusOr<google::iam::v1::Policy> InstanceAdminTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> InstanceAdminTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::InstanceAdminConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<spanner_admin::InstanceAdminConnection>
MakeInstanceAdminTracingConnection(
    std::shared_ptr<spanner_admin::InstanceAdminConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InstanceAdminTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
