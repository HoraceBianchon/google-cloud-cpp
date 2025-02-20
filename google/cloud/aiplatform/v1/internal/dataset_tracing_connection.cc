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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/internal/dataset_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatasetServiceTracingConnection::DatasetServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::DatasetServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::Dataset>>
DatasetServiceTracingConnection::CreateDataset(
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::CreateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateDataset(request));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceTracingConnection::GetDataset(
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::DatasetServiceConnection::GetDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataset(request));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceTracingConnection::UpdateDataset(
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::UpdateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateDataset(request));
}

StreamRange<google::cloud::aiplatform::v1::Dataset>
DatasetServiceTracingConnection::ListDatasets(
    google::cloud::aiplatform::v1::ListDatasetsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::ListDatasets");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDatasets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Dataset>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceTracingConnection::DeleteDataset(
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::DeleteDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteDataset(request));
}

future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>
DatasetServiceTracingConnection::ImportData(
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::DatasetServiceConnection::ImportData");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ImportData(request));
}

future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>
DatasetServiceTracingConnection::ExportData(
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::DatasetServiceConnection::ExportData");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ExportData(request));
}

StreamRange<google::cloud::aiplatform::v1::DataItem>
DatasetServiceTracingConnection::ListDataItems(
    google::cloud::aiplatform::v1::ListDataItemsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::ListDataItems");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDataItems(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::DataItem>(std::move(span), std::move(sr));
}

StreamRange<google::cloud::aiplatform::v1::DataItemView>
DatasetServiceTracingConnection::SearchDataItems(
    google::cloud::aiplatform::v1::SearchDataItemsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::SearchDataItems");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->SearchDataItems(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::DataItemView>(std::move(span),
                                                   std::move(sr));
}

StreamRange<google::cloud::aiplatform::v1::SavedQuery>
DatasetServiceTracingConnection::ListSavedQueries(
    google::cloud::aiplatform::v1::ListSavedQueriesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::ListSavedQueries");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSavedQueries(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::SavedQuery>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceTracingConnection::GetAnnotationSpec(
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::GetAnnotationSpec");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAnnotationSpec(request));
}

StreamRange<google::cloud::aiplatform::v1::Annotation>
DatasetServiceTracingConnection::ListAnnotations(
    google::cloud::aiplatform::v1::ListAnnotationsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::DatasetServiceConnection::ListAnnotations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListAnnotations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Annotation>(std::move(span),
                                                 std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::DatasetServiceConnection>
MakeDatasetServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::DatasetServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DatasetServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
