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
// source: google/cloud/metastore/v1/metastore_federation.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_federation_connection_impl.h"
#include "google/cloud/metastore/v1/internal/dataproc_metastore_federation_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataprocMetastoreFederationConnectionImpl::
    DataprocMetastoreFederationConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<metastore_v1_internal::DataprocMetastoreFederationStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          DataprocMetastoreFederationConnection::options())) {}

StreamRange<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationConnectionImpl::ListFederations(
    google::cloud::metastore::v1::ListFederationsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      metastore_v1::DataprocMetastoreFederationRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListFederations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::metastore::v1::Federation>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::metastore::v1::ListFederationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::metastore::v1::ListFederationsRequest const&
                       request) {
              return stub->ListFederations(context, request);
            },
            r, function_name);
      },
      [](google::cloud::metastore::v1::ListFederationsResponse r) {
        std::vector<google::cloud::metastore::v1::Federation> result(
            r.federations().size());
        auto& messages = *r.mutable_federations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationConnectionImpl::GetFederation(
    google::cloud::metastore::v1::GetFederationRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetFederation(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::metastore::v1::GetFederationRequest const& request) {
        return stub_->GetFederation(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationConnectionImpl::CreateFederation(
    google::cloud::metastore::v1::CreateFederationRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::metastore::v1::Federation>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::metastore::v1::CreateFederationRequest const&
                 request) {
        return stub->AsyncCreateFederation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::metastore::v1::Federation>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateFederation(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationConnectionImpl::UpdateFederation(
    google::cloud::metastore::v1::UpdateFederationRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::metastore::v1::Federation>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::metastore::v1::UpdateFederationRequest const&
                 request) {
        return stub->AsyncUpdateFederation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::metastore::v1::Federation>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateFederation(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationConnectionImpl::DeleteFederation(
    google::cloud::metastore::v1::DeleteFederationRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::metastore::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::metastore::v1::DeleteFederationRequest const&
                 request) {
        return stub->AsyncDeleteFederation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::metastore::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteFederation(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
