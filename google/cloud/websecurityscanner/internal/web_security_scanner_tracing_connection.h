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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_INTERNAL_WEB_SECURITY_SCANNER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_INTERNAL_WEB_SECURITY_SCANNER_TRACING_CONNECTION_H

#include "google/cloud/websecurityscanner/web_security_scanner_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class WebSecurityScannerTracingConnection
    : public websecurityscanner::WebSecurityScannerConnection {
 public:
  ~WebSecurityScannerTracingConnection() override = default;

  explicit WebSecurityScannerTracingConnection(
      std::shared_ptr<websecurityscanner::WebSecurityScannerConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> CreateScanConfig(
      google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
          request) override;

  Status DeleteScanConfig(
      google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> GetScanConfig(
      google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
          request) override;

  StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
  ListScanConfigs(google::cloud::websecurityscanner::v1::ListScanConfigsRequest
                      request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> UpdateScanConfig(
      google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StartScanRun(
      google::cloud::websecurityscanner::v1::StartScanRunRequest const& request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> GetScanRun(
      google::cloud::websecurityscanner::v1::GetScanRunRequest const& request)
      override;

  StreamRange<google::cloud::websecurityscanner::v1::ScanRun> ListScanRuns(
      google::cloud::websecurityscanner::v1::ListScanRunsRequest request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StopScanRun(
      google::cloud::websecurityscanner::v1::StopScanRunRequest const& request)
      override;

  StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
  ListCrawledUrls(google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest
                      request) override;

  StatusOr<google::cloud::websecurityscanner::v1::Finding> GetFinding(
      google::cloud::websecurityscanner::v1::GetFindingRequest const& request)
      override;

  StreamRange<google::cloud::websecurityscanner::v1::Finding> ListFindings(
      google::cloud::websecurityscanner::v1::ListFindingsRequest request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
  ListFindingTypeStats(
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
          request) override;

 private:
  std::shared_ptr<websecurityscanner::WebSecurityScannerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<websecurityscanner::WebSecurityScannerConnection>
MakeWebSecurityScannerTracingConnection(
    std::shared_ptr<websecurityscanner::WebSecurityScannerConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_INTERNAL_WEB_SECURITY_SCANNER_TRACING_CONNECTION_H
