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
// source: google/monitoring/v3/service_service.proto

#include "google/cloud/monitoring/internal/service_monitoring_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceMonitoringServiceTracingConnection::
    ServiceMonitoringServiceTracingConnection(
        std::shared_ptr<monitoring::ServiceMonitoringServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceTracingConnection::CreateService(
    google::monitoring::v3::CreateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::CreateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateService(request));
}

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceTracingConnection::GetService(
    google::monitoring::v3::GetServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::GetService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetService(request));
}

StreamRange<google::monitoring::v3::Service>
ServiceMonitoringServiceTracingConnection::ListServices(
    google::monitoring::v3::ListServicesRequest request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::ListServices");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListServices(std::move(request));
  return internal::MakeTracedStreamRange<google::monitoring::v3::Service>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceTracingConnection::UpdateService(
    google::monitoring::v3::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::UpdateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateService(request));
}

Status ServiceMonitoringServiceTracingConnection::DeleteService(
    google::monitoring::v3::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::DeleteService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteService(request));
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceTracingConnection::CreateServiceLevelObjective(
    google::monitoring::v3::CreateServiceLevelObjectiveRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::"
      "CreateServiceLevelObjective");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateServiceLevelObjective(request));
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceTracingConnection::GetServiceLevelObjective(
    google::monitoring::v3::GetServiceLevelObjectiveRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::"
      "GetServiceLevelObjective");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceLevelObjective(request));
}

StreamRange<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceTracingConnection::ListServiceLevelObjectives(
    google::monitoring::v3::ListServiceLevelObjectivesRequest request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::"
      "ListServiceLevelObjectives");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListServiceLevelObjectives(std::move(request));
  return internal::MakeTracedStreamRange<
      google::monitoring::v3::ServiceLevelObjective>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceTracingConnection::UpdateServiceLevelObjective(
    google::monitoring::v3::UpdateServiceLevelObjectiveRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::"
      "UpdateServiceLevelObjective");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateServiceLevelObjective(request));
}

Status ServiceMonitoringServiceTracingConnection::DeleteServiceLevelObjective(
    google::monitoring::v3::DeleteServiceLevelObjectiveRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring::ServiceMonitoringServiceConnection::"
      "DeleteServiceLevelObjective");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteServiceLevelObjective(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<monitoring::ServiceMonitoringServiceConnection>
MakeServiceMonitoringServiceTracingConnection(
    std::shared_ptr<monitoring::ServiceMonitoringServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ServiceMonitoringServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
