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
// source: google/cloud/dialogflow/cx/v3/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/versions_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VersionsTracingConnection : public dialogflow_cx::VersionsConnection {
 public:
  ~VersionsTracingConnection() override = default;

  explicit VersionsTracingConnection(
      std::shared_ptr<dialogflow_cx::VersionsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::cx::v3::Version> ListVersions(
      google::cloud::dialogflow::cx::v3::ListVersionsRequest request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::Version>> CreateVersion(
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request)
      override;

  Status DeleteVersion(
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> LoadVersion(
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request)
      override;

 private:
  std::shared_ptr<dialogflow_cx::VersionsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_cx::VersionsConnection>
MakeVersionsTracingConnection(
    std::shared_ptr<dialogflow_cx::VersionsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_TRACING_CONNECTION_H
