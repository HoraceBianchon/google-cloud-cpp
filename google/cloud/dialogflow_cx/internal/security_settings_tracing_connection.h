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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/security_settings_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SecuritySettingsServiceTracingConnection
    : public dialogflow_cx::SecuritySettingsServiceConnection {
 public:
  ~SecuritySettingsServiceTracingConnection() override = default;

  explicit SecuritySettingsServiceTracingConnection(
      std::shared_ptr<dialogflow_cx::SecuritySettingsServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  CreateSecuritySettings(
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  GetSecuritySettings(
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  UpdateSecuritySettings(
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::cx::v3::SecuritySettings>
  ListSecuritySettings(
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest request)
      override;

  Status DeleteSecuritySettings(
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request) override;

 private:
  std::shared_ptr<dialogflow_cx::SecuritySettingsServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_cx::SecuritySettingsServiceConnection>
MakeSecuritySettingsServiceTracingConnection(
    std::shared_ptr<dialogflow_cx::SecuritySettingsServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_TRACING_CONNECTION_H
