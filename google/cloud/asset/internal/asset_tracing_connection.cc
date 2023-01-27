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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/internal/asset_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AssetServiceTracingConnection::AssetServiceTracingConnection(
    std::shared_ptr<asset::AssetServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
AssetServiceTracingConnection::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  return child_->ExportAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset>
AssetServiceTracingConnection::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::ListAssets");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListAssets(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::asset::v1::Asset>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceTracingConnection::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request) {
  auto span = internal::MakeSpan(
      "asset::AssetServiceConnection::BatchGetAssetsHistory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchGetAssetsHistory(request));
}

StatusOr<google::cloud::asset::v1::Feed>
AssetServiceTracingConnection::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::CreateFeed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateFeed(request));
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceTracingConnection::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::GetFeed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeed(request));
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceTracingConnection::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::ListFeeds");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListFeeds(request));
}

StatusOr<google::cloud::asset::v1::Feed>
AssetServiceTracingConnection::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::UpdateFeed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFeed(request));
}

Status AssetServiceTracingConnection::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::DeleteFeed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteFeed(request));
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceTracingConnection::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::SearchAllResources");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->SearchAllResources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::asset::v1::ResourceSearchResult>(
      std::move(span), std::move(scope), std::move(sr));
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceTracingConnection::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::SearchAllIamPolicies");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->SearchAllIamPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::asset::v1::IamPolicySearchResult>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceTracingConnection::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::AnalyzeIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnalyzeIamPolicy(request));
}

future<StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
AssetServiceTracingConnection::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  return child_->AnalyzeIamPolicyLongrunning(request);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceTracingConnection::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::AnalyzeMove");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnalyzeMove(request));
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
AssetServiceTracingConnection::QueryAssets(
    google::cloud::asset::v1::QueryAssetsRequest const& request) {
  auto span = internal::MakeSpan("asset::AssetServiceConnection::QueryAssets");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->QueryAssets(request));
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::CreateSavedQuery(
    google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::CreateSavedQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSavedQuery(request));
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::GetSavedQuery(
    google::cloud::asset::v1::GetSavedQueryRequest const& request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::GetSavedQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSavedQuery(request));
}

StreamRange<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::ListSavedQueries(
    google::cloud::asset::v1::ListSavedQueriesRequest request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::ListSavedQueries");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListSavedQueries(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::asset::v1::SavedQuery>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceTracingConnection::UpdateSavedQuery(
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::UpdateSavedQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSavedQuery(request));
}

Status AssetServiceTracingConnection::DeleteSavedQuery(
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::DeleteSavedQuery");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSavedQuery(request));
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
AssetServiceTracingConnection::BatchGetEffectiveIamPolicies(
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "asset::AssetServiceConnection::BatchGetEffectiveIamPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->BatchGetEffectiveIamPolicies(request));
}

StreamRange<
    google::cloud::asset::v1::AnalyzeOrgPoliciesResponse::OrgPolicyResult>
AssetServiceTracingConnection::AnalyzeOrgPolicies(
    google::cloud::asset::v1::AnalyzeOrgPoliciesRequest request) {
  auto span =
      internal::MakeSpan("asset::AssetServiceConnection::AnalyzeOrgPolicies");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->AnalyzeOrgPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::asset::v1::AnalyzeOrgPoliciesResponse::OrgPolicyResult>(
      std::move(span), std::move(scope), std::move(sr));
}

StreamRange<google::cloud::asset::v1::
                AnalyzeOrgPolicyGovernedContainersResponse::GovernedContainer>
AssetServiceTracingConnection::AnalyzeOrgPolicyGovernedContainers(
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest
        request) {
  auto span = internal::MakeSpan(
      "asset::AssetServiceConnection::AnalyzeOrgPolicyGovernedContainers");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->AnalyzeOrgPolicyGovernedContainers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse::
          GovernedContainer>(std::move(span), std::move(scope), std::move(sr));
}

StreamRange<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse::
                GovernedAsset>
AssetServiceTracingConnection::AnalyzeOrgPolicyGovernedAssets(
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest request) {
  auto span = internal::MakeSpan(
      "asset::AssetServiceConnection::AnalyzeOrgPolicyGovernedAssets");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->AnalyzeOrgPolicyGovernedAssets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse::
          GovernedAsset>(std::move(span), std::move(scope), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<asset::AssetServiceConnection>
MakeAssetServiceTracingConnection(
    std::shared_ptr<asset::AssetServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AssetServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_internal
}  // namespace cloud
}  // namespace google
