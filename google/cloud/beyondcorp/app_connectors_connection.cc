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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/app_connectors_connection.h"
#include "google/cloud/beyondcorp/app_connectors_options.h"
#include "google/cloud/beyondcorp/internal/app_connectors_connection_impl.h"
#include "google/cloud/beyondcorp/internal/app_connectors_option_defaults.h"
#include "google/cloud/beyondcorp/internal/app_connectors_stub_factory.h"
#include "google/cloud/beyondcorp/internal/app_connectors_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectorsServiceConnection::~AppConnectorsServiceConnection() = default;

StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnection::ListAppConnectors(
    google::cloud::beyondcorp::appconnectors::v1::
        ListAppConnectorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>>();
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnection::GetAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        GetAppConnectorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnection::CreateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnection::UpdateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                    AppConnectorOperationMetadata>>
AppConnectorsServiceConnection::DeleteAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                   AppConnectorOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnection::ReportStatus(
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<AppConnectorsServiceConnection>
MakeAppConnectorsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AppConnectorsServicePolicyOptionList>(
      options, __func__);
  options = beyondcorp_internal::AppConnectorsServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = beyondcorp_internal::CreateDefaultAppConnectorsServiceStub(
      background->cq(), options);
  return beyondcorp_internal::MakeAppConnectorsServiceTracingConnection(
      std::make_shared<beyondcorp_internal::AppConnectorsServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google
