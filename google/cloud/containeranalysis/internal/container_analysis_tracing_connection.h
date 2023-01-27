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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_TRACING_CONNECTION_H

#include "google/cloud/containeranalysis/container_analysis_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ContainerAnalysisTracingConnection
    : public containeranalysis::ContainerAnalysisConnection {
 public:
  ~ContainerAnalysisTracingConnection() override = default;

  explicit ContainerAnalysisTracingConnection(
      std::shared_ptr<containeranalysis::ContainerAnalysisConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const& request) override;

 private:
  std::shared_ptr<containeranalysis::ContainerAnalysisConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<containeranalysis::ContainerAnalysisConnection>
MakeContainerAnalysisTracingConnection(
    std::shared_ptr<containeranalysis::ContainerAnalysisConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_TRACING_CONNECTION_H
