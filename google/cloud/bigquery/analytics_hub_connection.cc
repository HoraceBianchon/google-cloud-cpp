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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analytics_hub_connection.h"
#include "google/cloud/bigquery/analytics_hub_options.h"
#include "google/cloud/bigquery/internal/analytics_hub_connection_impl.h"
#include "google/cloud/bigquery/internal/analytics_hub_option_defaults.h"
#include "google/cloud/bigquery/internal/analytics_hub_stub_factory.h"
#include "google/cloud/bigquery/internal/analytics_hub_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AnalyticsHubServiceConnection::~AnalyticsHubServiceConnection() = default;

StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnection::ListDataExchanges(
    google::cloud::bigquery::analyticshub::v1::
        ListDataExchangesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>>();
}

StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnection::ListOrgDataExchanges(
    google::cloud::bigquery::analyticshub::v1::
        ListOrgDataExchangesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>>();
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnection::GetDataExchange(
    google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnection::CreateDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        CreateDataExchangeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
AnalyticsHubServiceConnection::UpdateDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        UpdateDataExchangeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AnalyticsHubServiceConnection::DeleteDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        DeleteDataExchangeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnection::ListListings(
    google::cloud::bigquery::analyticshub::v1::
        ListListingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>>();
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnection::GetListing(
    google::cloud::bigquery::analyticshub::v1::GetListingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnection::CreateListing(
    google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
AnalyticsHubServiceConnection::UpdateListing(
    google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AnalyticsHubServiceConnection::DeleteListing(
    google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
AnalyticsHubServiceConnection::SubscribeListing(
    google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> AnalyticsHubServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> AnalyticsHubServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AnalyticsHubServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AnalyticsHubServiceConnection>
MakeAnalyticsHubServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AnalyticsHubServicePolicyOptionList>(options,
                                                                      __func__);
  options =
      bigquery_internal::AnalyticsHubServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = bigquery_internal::CreateDefaultAnalyticsHubServiceStub(
      background->cq(), options);
  return bigquery_internal::MakeAnalyticsHubServiceTracingConnection(
      std::make_shared<bigquery_internal::AnalyticsHubServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
