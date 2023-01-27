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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_INTERNAL_CERTIFICATE_MANAGER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_INTERNAL_CERTIFICATE_MANAGER_TRACING_CONNECTION_H

#include "google/cloud/certificatemanager/certificate_manager_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CertificateManagerTracingConnection
    : public certificatemanager::CertificateManagerConnection {
 public:
  ~CertificateManagerTracingConnection() override = default;

  explicit CertificateManagerTracingConnection(
      std::shared_ptr<certificatemanager::CertificateManagerConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::certificatemanager::v1::Certificate>
  ListCertificates(
      google::cloud::certificatemanager::v1::ListCertificatesRequest request)
      override;

  StatusOr<google::cloud::certificatemanager::v1::Certificate> GetCertificate(
      google::cloud::certificatemanager::v1::GetCertificateRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
  CreateCertificate(
      google::cloud::certificatemanager::v1::CreateCertificateRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
  UpdateCertificate(
      google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificate(
      google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
          request) override;

  StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
  ListCertificateMaps(
      google::cloud::certificatemanager::v1::ListCertificateMapsRequest request)
      override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
  GetCertificateMap(
      google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
  CreateCertificateMap(
      google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
  UpdateCertificateMap(
      google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateMap(
      google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
          request) override;

  StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>
  ListCertificateMapEntries(
      google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
  GetCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          GetCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
  CreateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          CreateCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
  UpdateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          UpdateCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          DeleteCertificateMapEntryRequest const& request) override;

  StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
  ListDnsAuthorizations(
      google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
  GetDnsAuthorization(
      google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
          request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
  CreateDnsAuthorization(
      google::cloud::certificatemanager::v1::
          CreateDnsAuthorizationRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
  UpdateDnsAuthorization(
      google::cloud::certificatemanager::v1::
          UpdateDnsAuthorizationRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteDnsAuthorization(
      google::cloud::certificatemanager::v1::
          DeleteDnsAuthorizationRequest const& request) override;

  StreamRange<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
  ListCertificateIssuanceConfigs(
      google::cloud::certificatemanager::v1::
          ListCertificateIssuanceConfigsRequest request) override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
  GetCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          GetCertificateIssuanceConfigRequest const& request) override;

  future<StatusOr<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
  CreateCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          CreateCertificateIssuanceConfigRequest const& request) override;

  future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          DeleteCertificateIssuanceConfigRequest const& request) override;

 private:
  std::shared_ptr<certificatemanager::CertificateManagerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<certificatemanager::CertificateManagerConnection>
MakeCertificateManagerTracingConnection(
    std::shared_ptr<certificatemanager::CertificateManagerConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_INTERNAL_CERTIFICATE_MANAGER_TRACING_CONNECTION_H
