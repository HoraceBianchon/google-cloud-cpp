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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_CONNECTION_H

#include "google/cloud/gameservices/realms_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RealmsServiceTracingConnection
    : public gameservices::RealmsServiceConnection {
 public:
  ~RealmsServiceTracingConnection() override = default;

  explicit RealmsServiceTracingConnection(
      std::shared_ptr<gameservices::RealmsServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::gaming::v1::Realm> ListRealms(
      google::cloud::gaming::v1::ListRealmsRequest request) override;

  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(
      google::cloud::gaming::v1::GetRealmRequest const& request) override;

  future<StatusOr<google::cloud::gaming::v1::Realm>> CreateRealm(
      google::cloud::gaming::v1::CreateRealmRequest const& request) override;

  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>> DeleteRealm(
      google::cloud::gaming::v1::DeleteRealmRequest const& request) override;

  future<StatusOr<google::cloud::gaming::v1::Realm>> UpdateRealm(
      google::cloud::gaming::v1::UpdateRealmRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
  PreviewRealmUpdate(google::cloud::gaming::v1::PreviewRealmUpdateRequest const&
                         request) override;

 private:
  std::shared_ptr<gameservices::RealmsServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<gameservices::RealmsServiceConnection>
MakeRealmsServiceTracingConnection(
    std::shared_ptr<gameservices::RealmsServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_CONNECTION_H
