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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/certificate_authority_connection.h"
#include "google/cloud/privateca/certificate_authority_options.h"
#include "google/cloud/privateca/internal/certificate_authority_connection_impl.h"
#include "google/cloud/privateca/internal/certificate_authority_option_defaults.h"
#include "google/cloud/privateca/internal/certificate_authority_stub_factory.h"
#include "google/cloud/privateca/internal/certificate_authority_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace privateca {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceConnection::
    ~CertificateAuthorityServiceConnection() = default;

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnection::CreateCertificate(
    google::cloud::security::privateca::v1::CreateCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnection::GetCertificate(
    google::cloud::security::privateca::v1::GetCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnection::ListCertificates(
    google::cloud::security::privateca::v1::
        ListCertificatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::security::privateca::v1::Certificate>>();
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnection::RevokeCertificate(
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnection::UpdateCertificate(
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::ActivateCertificateAuthority(
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::CreateCertificateAuthority(
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::DisableCertificateAuthority(
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::EnableCertificateAuthority(
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceConnection::FetchCertificateAuthorityCsr(
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceConnection::GetCertificateAuthority(
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceConnection::ListCertificateAuthorities(
    google::cloud::security::privateca::v1::
        ListCertificateAuthoritiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::security::privateca::v1::CertificateAuthority>>();
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::UndeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::DeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnection::UpdateCertificateAuthority(
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceConnection::CreateCaPool(
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CaPool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceConnection::UpdateCaPool(
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CaPool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceConnection::GetCaPool(
    google::cloud::security::privateca::v1::GetCaPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceConnection::ListCaPools(
    google::cloud::security::privateca::v1::
        ListCaPoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::security::privateca::v1::CaPool>>();
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceConnection::DeleteCaPool(
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceConnection::FetchCaCerts(
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceConnection::GetCertificateRevocationList(
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceConnection::ListCertificateRevocationLists(
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::security::privateca::v1::CertificateRevocationList>>();
}

future<
    StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>>
CertificateAuthorityServiceConnection::UpdateCertificateRevocationList(
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::security::privateca::v1::CertificateRevocationList>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceConnection::CreateCertificateTemplate(
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceConnection::DeleteCertificateTemplate(
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceConnection::GetCertificateTemplate(
    google::cloud::security::privateca::v1::
        GetCertificateTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceConnection::ListCertificateTemplates(
    google::cloud::security::privateca::v1::
        ListCertificateTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::security::privateca::v1::CertificateTemplate>>();
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceConnection::UpdateCertificateTemplate(
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<CertificateAuthorityServiceConnection>
MakeCertificateAuthorityServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CertificateAuthorityServicePolicyOptionList>(
      options, __func__);
  options = privateca_internal::CertificateAuthorityServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = privateca_internal::CreateDefaultCertificateAuthorityServiceStub(
      background->cq(), options);
  return privateca_internal::MakeCertificateAuthorityServiceTracingConnection(
      std::make_shared<
          privateca_internal::CertificateAuthorityServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca
}  // namespace cloud
}  // namespace google
