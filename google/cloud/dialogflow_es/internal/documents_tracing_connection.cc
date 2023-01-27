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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/internal/documents_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentsTracingConnection::DocumentsTracingConnection(
    std::shared_ptr<dialogflow_es::DocumentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::Document>
DocumentsTracingConnection::ListDocuments(
    google::cloud::dialogflow::v2::ListDocumentsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_es::DocumentsConnection::ListDocuments");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListDocuments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::Document>(std::move(span),
                                               std::move(scope), std::move(sr));
}

StatusOr<google::cloud::dialogflow::v2::Document>
DocumentsTracingConnection::GetDocument(
    google::cloud::dialogflow::v2::GetDocumentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::DocumentsConnection::GetDocument");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDocument(request));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsTracingConnection::CreateDocument(
    google::cloud::dialogflow::v2::CreateDocumentRequest const& request) {
  return child_->CreateDocument(request);
}

future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>
DocumentsTracingConnection::ImportDocuments(
    google::cloud::dialogflow::v2::ImportDocumentsRequest const& request) {
  return child_->ImportDocuments(request);
}

future<StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
DocumentsTracingConnection::DeleteDocument(
    google::cloud::dialogflow::v2::DeleteDocumentRequest const& request) {
  return child_->DeleteDocument(request);
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsTracingConnection::UpdateDocument(
    google::cloud::dialogflow::v2::UpdateDocumentRequest const& request) {
  return child_->UpdateDocument(request);
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsTracingConnection::ReloadDocument(
    google::cloud::dialogflow::v2::ReloadDocumentRequest const& request) {
  return child_->ReloadDocument(request);
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsTracingConnection::ExportDocument(
    google::cloud::dialogflow::v2::ExportDocumentRequest const& request) {
  return child_->ExportDocument(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::DocumentsConnection>
MakeDocumentsTracingConnection(
    std::shared_ptr<dialogflow_es::DocumentsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DocumentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
