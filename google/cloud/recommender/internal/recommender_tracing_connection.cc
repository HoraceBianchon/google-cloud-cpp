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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/internal/recommender_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace recommender_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RecommenderTracingConnection::RecommenderTracingConnection(
    std::shared_ptr<recommender::RecommenderConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::recommender::v1::Insight>
RecommenderTracingConnection::ListInsights(
    google::cloud::recommender::v1::ListInsightsRequest request) {
  auto span =
      internal::MakeSpan("recommender::RecommenderConnection::ListInsights");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListInsights(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recommender::v1::Insight>(std::move(span),
                                               std::move(scope), std::move(sr));
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderTracingConnection::GetInsight(
    google::cloud::recommender::v1::GetInsightRequest const& request) {
  auto span =
      internal::MakeSpan("recommender::RecommenderConnection::GetInsight");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInsight(request));
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderTracingConnection::MarkInsightAccepted(
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::MarkInsightAccepted");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MarkInsightAccepted(request));
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderTracingConnection::ListRecommendations(
    google::cloud::recommender::v1::ListRecommendationsRequest request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::ListRecommendations");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListRecommendations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recommender::v1::Recommendation>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderTracingConnection::GetRecommendation(
    google::cloud::recommender::v1::GetRecommendationRequest const& request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::GetRecommendation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRecommendation(request));
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderTracingConnection::MarkRecommendationClaimed(
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::MarkRecommendationClaimed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MarkRecommendationClaimed(request));
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderTracingConnection::MarkRecommendationSucceeded(
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::MarkRecommendationSucceeded");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MarkRecommendationSucceeded(request));
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderTracingConnection::MarkRecommendationFailed(
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::MarkRecommendationFailed");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MarkRecommendationFailed(request));
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderTracingConnection::GetRecommenderConfig(
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::GetRecommenderConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRecommenderConfig(request));
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderTracingConnection::UpdateRecommenderConfig(
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::UpdateRecommenderConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateRecommenderConfig(request));
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderTracingConnection::GetInsightTypeConfig(
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::GetInsightTypeConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInsightTypeConfig(request));
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderTracingConnection::UpdateInsightTypeConfig(
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recommender::RecommenderConnection::UpdateInsightTypeConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateInsightTypeConfig(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<recommender::RecommenderConnection>
MakeRecommenderTracingConnection(
    std::shared_ptr<recommender::RecommenderConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RecommenderTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_internal
}  // namespace cloud
}  // namespace google
