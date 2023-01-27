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
// source: google/cloud/gaming/v1/realms_service.proto

#include "google/cloud/gameservices/realms_connection.h"
#include "google/cloud/gameservices/internal/realms_connection_impl.h"
#include "google/cloud/gameservices/internal/realms_option_defaults.h"
#include "google/cloud/gameservices/internal/realms_stub_factory.h"
#include "google/cloud/gameservices/internal/realms_tracing_connection.h"
#include "google/cloud/gameservices/realms_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RealmsServiceConnection::~RealmsServiceConnection() = default;

StreamRange<google::cloud::gaming::v1::Realm>
RealmsServiceConnection::ListRealms(
    google::cloud::gaming::v1::
        ListRealmsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::gaming::v1::Realm>>();
}

StatusOr<google::cloud::gaming::v1::Realm> RealmsServiceConnection::GetRealm(
    google::cloud::gaming::v1::GetRealmRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceConnection::CreateRealm(
    google::cloud::gaming::v1::CreateRealmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::Realm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
RealmsServiceConnection::DeleteRealm(
    google::cloud::gaming::v1::DeleteRealmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceConnection::UpdateRealm(
    google::cloud::gaming::v1::UpdateRealmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::Realm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
RealmsServiceConnection::PreviewRealmUpdate(
    google::cloud::gaming::v1::PreviewRealmUpdateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<RealmsServiceConnection> MakeRealmsServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 RealmsServicePolicyOptionList>(options,
                                                                __func__);
  options =
      gameservices_internal::RealmsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = gameservices_internal::CreateDefaultRealmsServiceStub(
      background->cq(), options);
  return gameservices_internal::MakeRealmsServiceTracingConnection(
      std::make_shared<gameservices_internal::RealmsServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
