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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_CONNECTION_H

#include "google/cloud/secretmanager/secret_manager_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SecretManagerServiceTracingConnection
    : public secretmanager::SecretManagerServiceConnection {
 public:
  ~SecretManagerServiceTracingConnection() override = default;

  explicit SecretManagerServiceTracingConnection(
      std::shared_ptr<secretmanager::SecretManagerServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      google::cloud::secretmanager::v1::ListSecretsRequest request) override;

  StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      google::cloud::secretmanager::v1::CreateSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> AddSecretVersion(
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      google::cloud::secretmanager::v1::GetSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request)
      override;

  Status DeleteSecret(
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request)
      override;

  StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(google::cloud::secretmanager::v1::ListSecretVersionsRequest
                         request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> GetSecretVersion(
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> EnableSecretVersion(
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<secretmanager::SecretManagerServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<secretmanager::SecretManagerServiceConnection>
MakeSecretManagerServiceTracingConnection(
    std::shared_ptr<secretmanager::SecretManagerServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_CONNECTION_H
