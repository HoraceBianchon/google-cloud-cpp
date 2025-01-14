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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalersRestMetadata::AutoscalersRestMetadata(
    std::shared_ptr<AutoscalersRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerAggregatedList>
AutoscalersRestMetadata::AggregatedListAutoscalers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListAutoscalers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncDeleteAutoscalers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::autoscalers::v1::
        DeleteAutoscalersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteAutoscalers(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersRestMetadata::GetAutoscalers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalersRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetAutoscalers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncInsertAutoscalers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::autoscalers::v1::
        InsertAutoscalersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertAutoscalers(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerList>
AutoscalersRestMetadata::ListAutoscalers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListAutoscalers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncPatchAutoscalers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalersRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchAutoscalers(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncUpdateAutoscalers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::autoscalers::v1::
        UpdateAutoscalersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateAutoscalers(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> AutoscalersRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void AutoscalersRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google
