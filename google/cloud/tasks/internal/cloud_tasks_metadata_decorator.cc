// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/internal/cloud_tasks_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tasks/v2/cloudtasks.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tasks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudTasksMetadata::CloudTasksMetadata(std::shared_ptr<CloudTasksStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::tasks::v2::ListQueuesResponse>
CloudTasksMetadata::ListQueues(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListQueuesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListQueues(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::GetQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetQueueRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::CreateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateQueueRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::UpdateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::UpdateQueueRequest const& request) {
  SetMetadata(context, "queue.name=" + request.queue().name());
  return child_->UpdateQueue(context, request);
}

Status CloudTasksMetadata::DeleteQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteQueueRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::PurgeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PurgeQueueRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->PurgeQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::PauseQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PauseQueueRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->PauseQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksMetadata::ResumeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ResumeQueueRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ResumeQueue(context, request);
}

StatusOr<google::iam::v1::Policy> CloudTasksMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> CloudTasksMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudTasksMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::tasks::v2::ListTasksResponse>
CloudTasksMetadata::ListTasks(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListTasksRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTasks(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksMetadata::GetTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetTaskRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTask(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksMetadata::CreateTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateTaskRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateTask(context, request);
}

Status CloudTasksMetadata::DeleteTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteTaskRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteTask(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksMetadata::RunTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::RunTaskRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->RunTask(context, request);
}

void CloudTasksMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudTasksMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  if (options.has<AuthorityOption>()) {
    context.set_authority(options.get<AuthorityOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_internal
}  // namespace cloud
}  // namespace google
