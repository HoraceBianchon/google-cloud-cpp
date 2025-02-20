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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#include "google/cloud/migrationcenter/v1/internal/migration_center_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/migrationcenter/v1/migrationcenter.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace migrationcenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationCenterMetadata::MigrationCenterMetadata(
    std::shared_ptr<MigrationCenterStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::migrationcenter::v1::ListAssetsResponse>
MigrationCenterMetadata::ListAssets(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListAssetsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterMetadata::GetAsset(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetAssetRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAsset(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterMetadata::UpdateAsset(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::UpdateAssetRequest const& request) {
  SetMetadata(context, "asset.name=" + request.asset().name());
  return child_->UpdateAsset(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
MigrationCenterMetadata::BatchUpdateAssets(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BatchUpdateAssets(context, request);
}

Status MigrationCenterMetadata::DeleteAsset(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::DeleteAssetRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteAsset(context, request);
}

Status MigrationCenterMetadata::BatchDeleteAssets(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BatchDeleteAssets(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
MigrationCenterMetadata::ReportAssetFrames(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ReportAssetFrames(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
MigrationCenterMetadata::AggregateAssetsValues(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->AggregateAssetsValues(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateImportJobRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateImportJob(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ListImportJobsResponse>
MigrationCenterMetadata::ListImportJobs(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListImportJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListImportJobs(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ImportJob>
MigrationCenterMetadata::GetImportJob(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetImportJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetImportJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteImportJobRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteImportJob(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncUpdateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::UpdateImportJobRequest const& request) {
  SetMetadata(*context, "import_job.name=" + request.import_job().name());
  return child_->AsyncUpdateImportJob(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncValidateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncValidateImportJob(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncRunImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::RunImportJobRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncRunImportJob(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
MigrationCenterMetadata::GetImportDataFile(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetImportDataFile(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListImportDataFilesResponse>
MigrationCenterMetadata::ListImportDataFiles(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListImportDataFilesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListImportDataFiles(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateImportDataFile(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteImportDataFile(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ListGroupsResponse>
MigrationCenterMetadata::ListGroups(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListGroupsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListGroups(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::Group>
MigrationCenterMetadata::GetGroup(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetGroupRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetGroup(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateGroupRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::UpdateGroupRequest const& request) {
  SetMetadata(*context, "group.name=" + request.group().name());
  return child_->AsyncUpdateGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteGroupRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncAddAssetsToGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
        request) {
  SetMetadata(*context, "group=" + request.group());
  return child_->AsyncAddAssetsToGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncRemoveAssetsFromGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
        request) {
  SetMetadata(*context, "group=" + request.group());
  return child_->AsyncRemoveAssetsFromGroup(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ListErrorFramesResponse>
MigrationCenterMetadata::ListErrorFrames(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListErrorFramesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListErrorFrames(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>
MigrationCenterMetadata::GetErrorFrame(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetErrorFrame(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListSourcesResponse>
MigrationCenterMetadata::ListSources(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListSourcesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSources(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::Source>
MigrationCenterMetadata::GetSource(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetSourceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSource(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateSourceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateSource(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncUpdateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::UpdateSourceRequest const& request) {
  SetMetadata(*context, "source.name=" + request.source().name());
  return child_->AsyncUpdateSource(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteSourceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteSource(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ListPreferenceSetsResponse>
MigrationCenterMetadata::ListPreferenceSets(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListPreferenceSetsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListPreferenceSets(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>
MigrationCenterMetadata::GetPreferenceSet(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetPreferenceSet(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreatePreferenceSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncUpdatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
        request) {
  SetMetadata(*context,
              "preference_set.name=" + request.preference_set().name());
  return child_->AsyncUpdatePreferenceSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeletePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeletePreferenceSet(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::Settings>
MigrationCenterMetadata::GetSettings(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetSettingsRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSettings(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncUpdateSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request) {
  SetMetadata(*context, "settings.name=" + request.settings().name());
  return child_->AsyncUpdateSettings(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateReportConfig(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::ReportConfig>
MigrationCenterMetadata::GetReportConfig(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetReportConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetReportConfig(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListReportConfigsResponse>
MigrationCenterMetadata::ListReportConfigs(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListReportConfigsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListReportConfigs(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteReportConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncCreateReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::CreateReportRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateReport(cq, std::move(context), request);
}

StatusOr<google::cloud::migrationcenter::v1::Report>
MigrationCenterMetadata::GetReport(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::GetReportRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetReport(context, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListReportsResponse>
MigrationCenterMetadata::ListReports(
    grpc::ClientContext& context,
    google::cloud::migrationcenter::v1::ListReportsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListReports(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncDeleteReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::migrationcenter::v1::DeleteReportRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteReport(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> MigrationCenterMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void MigrationCenterMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void MigrationCenterMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1_internal
}  // namespace cloud
}  // namespace google
