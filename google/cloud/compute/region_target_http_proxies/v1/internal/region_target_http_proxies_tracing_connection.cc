// Copyright 2023 Google LLC
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
// source:
// google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies.proto

#include "google/cloud/compute/region_target_http_proxies/v1/internal/region_target_http_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionTargetHttpProxiesTracingConnection::
    RegionTargetHttpProxiesTracingConnection(
        std::shared_ptr<compute_region_target_http_proxies_v1::
                            RegionTargetHttpProxiesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesTracingConnection::DeleteRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        DeleteRegionTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_http_proxies_v1::"
      "RegionTargetHttpProxiesConnection::DeleteRegionTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteRegionTargetHttpProxies(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesTracingConnection::GetRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        GetRegionTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_http_proxies_v1::"
      "RegionTargetHttpProxiesConnection::GetRegionTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRegionTargetHttpProxies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesTracingConnection::InsertRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        InsertRegionTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_http_proxies_v1::"
      "RegionTargetHttpProxiesConnection::InsertRegionTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertRegionTargetHttpProxies(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesTracingConnection::ListRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        ListRegionTargetHttpProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_target_http_proxies_v1::"
      "RegionTargetHttpProxiesConnection::ListRegionTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionTargetHttpProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetHttpProxy>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesTracingConnection::SetUrlMap(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        SetUrlMapRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_target_http_proxies_v1::"
      "RegionTargetHttpProxiesConnection::SetUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetUrlMap(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_region_target_http_proxies_v1::RegionTargetHttpProxiesConnection>
MakeRegionTargetHttpProxiesTracingConnection(
    std::shared_ptr<compute_region_target_http_proxies_v1::
                        RegionTargetHttpProxiesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionTargetHttpProxiesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google
