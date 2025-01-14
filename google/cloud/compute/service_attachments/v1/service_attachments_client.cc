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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#include "google/cloud/compute/service_attachments/v1/service_attachments_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceAttachmentsClient::ServiceAttachmentsClient(
    ExperimentalTag, std::shared_ptr<ServiceAttachmentsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ServiceAttachmentsClient::~ServiceAttachmentsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentAggregatedList>
ServiceAttachmentsClient::AggregatedListServiceAttachments(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      AggregatedListServiceAttachmentsRequest request;
  request.set_project(project);
  return connection_->AggregatedListServiceAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentAggregatedList>
ServiceAttachmentsClient::AggregatedListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        AggregatedListServiceAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListServiceAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::DeleteServiceAttachments(
    std::string const& project, std::string const& region,
    std::string const& service_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      DeleteServiceAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_service_attachment(service_attachment);
  return connection_->DeleteServiceAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::DeleteServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteServiceAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsClient::GetServiceAttachments(
    std::string const& project, std::string const& region,
    std::string const& service_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      GetServiceAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_service_attachment(service_attachment);
  return connection_->GetServiceAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsClient::GetServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        GetServiceAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetServiceAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsClient::GetIamPolicy(std::string const& project,
                                       std::string const& region,
                                       std::string const& resource,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::GetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsClient::GetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::InsertServiceAttachments(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::ServiceAttachment const&
        service_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      InsertServiceAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_service_attachment_resource() = service_attachment_resource;
  return connection_->InsertServiceAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::InsertServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertServiceAttachments(request);
}

StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsClient::ListServiceAttachments(std::string const& project,
                                                 std::string const& region,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      ListServiceAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListServiceAttachments(request);
}

StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsClient::ListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        ListServiceAttachmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServiceAttachments(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::PatchServiceAttachments(
    std::string const& project, std::string const& region,
    std::string const& service_attachment,
    google::cloud::cpp::compute::v1::ServiceAttachment const&
        service_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      PatchServiceAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_service_attachment(service_attachment);
  *request.mutable_service_attachment_resource() = service_attachment_resource;
  return connection_->PatchServiceAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsClient::PatchServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchServiceAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsClient::SetIamPolicy(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetPolicyRequest const&
        region_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::SetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_policy_request_resource() =
      region_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsClient::SetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ServiceAttachmentsClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::service_attachments::v1::
      TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ServiceAttachmentsClient::TestIamPermissions(
    google::cloud::cpp::compute::service_attachments::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1
}  // namespace cloud
}  // namespace google
