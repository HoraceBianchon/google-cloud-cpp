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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/internal/profiler_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace profiler_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProfilerServiceTracingConnection::ProfilerServiceTracingConnection(
    std::shared_ptr<profiler::ProfilerServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceTracingConnection::CreateProfile(
    google::devtools::cloudprofiler::v2::CreateProfileRequest const& request) {
  auto span =
      internal::MakeSpan("profiler::ProfilerServiceConnection::CreateProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateProfile(request));
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceTracingConnection::CreateOfflineProfile(
    google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "profiler::ProfilerServiceConnection::CreateOfflineProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateOfflineProfile(request));
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceTracingConnection::UpdateProfile(
    google::devtools::cloudprofiler::v2::UpdateProfileRequest const& request) {
  auto span =
      internal::MakeSpan("profiler::ProfilerServiceConnection::UpdateProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateProfile(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<profiler::ProfilerServiceConnection>
MakeProfilerServiceTracingConnection(
    std::shared_ptr<profiler::ProfilerServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ProfilerServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_internal
}  // namespace cloud
}  // namespace google
