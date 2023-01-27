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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/services_connection.h"
#include "google/cloud/appengine/internal/services_connection_impl.h"
#include "google/cloud/appengine/internal/services_option_defaults.h"
#include "google/cloud/appengine/internal/services_stub_factory.h"
#include "google/cloud/appengine/internal/services_tracing_connection.h"
#include "google/cloud/appengine/services_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServicesConnection::~ServicesConnection() = default;

StreamRange<google::appengine::v1::Service> ServicesConnection::ListServices(
    google::appengine::v1::
        ListServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::appengine::v1::Service>>();
}

StatusOr<google::appengine::v1::Service> ServicesConnection::GetService(
    google::appengine::v1::GetServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::Service>>
ServicesConnection::UpdateService(
    google::appengine::v1::UpdateServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Service>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
ServicesConnection::DeleteService(
    google::appengine::v1::DeleteServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ServicesConnection> MakeServicesConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ServicesPolicyOptionList>(options, __func__);
  options = appengine_internal::ServicesDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      appengine_internal::CreateDefaultServicesStub(background->cq(), options);
  return appengine_internal::MakeServicesTracingConnection(
      std::make_shared<appengine_internal::ServicesConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
