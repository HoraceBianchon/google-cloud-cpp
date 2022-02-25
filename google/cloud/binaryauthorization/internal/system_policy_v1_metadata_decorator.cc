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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/internal/system_policy_v1_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/binaryauthorization/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SystemPolicyV1Metadata::SystemPolicyV1Metadata(
    std::shared_ptr<SystemPolicyV1Stub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
SystemPolicyV1Metadata::GetSystemPolicy(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSystemPolicy(context, request);
}

void SystemPolicyV1Metadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SystemPolicyV1Metadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google
