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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/internal/data_catalog_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataCatalogTracingConnection::DataCatalogTracingConnection(
    std::shared_ptr<datacatalog::DataCatalogConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
DataCatalogTracingConnection::SearchCatalog(
    google::cloud::datacatalog::v1::SearchCatalogRequest request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::SearchCatalog");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->SearchCatalog(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::v1::SearchCatalogResult>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::CreateEntryGroup(
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::CreateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEntryGroup(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::GetEntryGroup(
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::GetEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntryGroup(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::UpdateEntryGroup(
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::UpdateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntryGroup(request));
}

Status DataCatalogTracingConnection::DeleteEntryGroup(
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::DeleteEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEntryGroup(request));
}

StreamRange<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::ListEntryGroups(
    google::cloud::datacatalog::v1::ListEntryGroupsRequest request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::ListEntryGroups");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListEntryGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::v1::EntryGroup>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::CreateEntry(
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::CreateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::UpdateEntry(
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::UpdateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntry(request));
}

Status DataCatalogTracingConnection::DeleteEntry(
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::DeleteEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::GetEntry(
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::GetEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::LookupEntry(
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::LookupEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->LookupEntry(request));
}

StreamRange<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::ListEntries(
    google::cloud::datacatalog::v1::ListEntriesRequest request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::ListEntries");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListEntries(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datacatalog::v1::Entry>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogTracingConnection::ModifyEntryOverview(
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::ModifyEntryOverview");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModifyEntryOverview(request));
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogTracingConnection::ModifyEntryContacts(
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::ModifyEntryContacts");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModifyEntryContacts(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::CreateTagTemplate(
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::CreateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::GetTagTemplate(
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::GetTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::UpdateTagTemplate(
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::UpdateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTagTemplate(request));
}

Status DataCatalogTracingConnection::DeleteTagTemplate(
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::DeleteTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::CreateTagTemplateField(
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::CreateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::UpdateTagTemplateField(
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::UpdateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::RenameTagTemplateField(
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::RenameTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::RenameTagTemplateFieldEnumValue(
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::RenameTagTemplateFieldEnumValue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->RenameTagTemplateFieldEnumValue(request));
}

Status DataCatalogTracingConnection::DeleteTagTemplateField(
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::DeleteTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::CreateTag(
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::CreateTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTag(request));
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::UpdateTag(
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::UpdateTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTag(request));
}

Status DataCatalogTracingConnection::DeleteTag(
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::DeleteTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTag(request));
}

StreamRange<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::ListTags(
    google::cloud::datacatalog::v1::ListTagsRequest request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::ListTags");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListTags(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datacatalog::v1::Tag>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogTracingConnection::StarEntry(
    google::cloud::datacatalog::v1::StarEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::StarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StarEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogTracingConnection::UnstarEntry(
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::UnstarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UnstarEntry(request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog::DataCatalogConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog::DataCatalogConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datacatalog::DataCatalogConnection>
MakeDataCatalogTracingConnection(
    std::shared_ptr<datacatalog::DataCatalogConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DataCatalogTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google
