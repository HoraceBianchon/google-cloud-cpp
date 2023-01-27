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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/ekm_connection.h"
#include "google/cloud/kms/ekm_options.h"
#include "google/cloud/kms/internal/ekm_connection_impl.h"
#include "google/cloud/kms/internal/ekm_option_defaults.h"
#include "google/cloud/kms/internal/ekm_stub_factory.h"
#include "google/cloud/kms/internal/ekm_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceConnection::~EkmServiceConnection() = default;

StreamRange<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::ListEkmConnections(
    google::cloud::kms::v1::
        ListEkmConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::EkmConnection>>();
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::GetEkmConnection(
    google::cloud::kms::v1::GetEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::CreateEkmConnection(
    google::cloud::kms::v1::CreateEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::UpdateEkmConnection(
    google::cloud::kms::v1::UpdateEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<EkmServiceConnection> MakeEkmServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 EkmServicePolicyOptionList>(options, __func__);
  options = kms_internal::EkmServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      kms_internal::CreateDefaultEkmServiceStub(background->cq(), options);
  return kms_internal::MakeEkmServiceTracingConnection(
      std::make_shared<kms_internal::EkmServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms
}  // namespace cloud
}  // namespace google
