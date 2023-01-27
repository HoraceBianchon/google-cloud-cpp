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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_CONNECTION_H

#include "google/cloud/filestore/cloud_filestore_manager_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudFilestoreManagerTracingConnection
    : public filestore::CloudFilestoreManagerConnection {
 public:
  ~CloudFilestoreManagerTracingConnection() override = default;

  explicit CloudFilestoreManagerTracingConnection(
      std::shared_ptr<filestore::CloudFilestoreManagerConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::filestore::v1::Instance> ListInstances(
      google::cloud::filestore::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      google::cloud::filestore::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::cloud::filestore::v1::Instance>> CreateInstance(
      google::cloud::filestore::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::filestore::v1::Instance>> UpdateInstance(
      google::cloud::filestore::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::filestore::v1::Instance>> RestoreInstance(
      google::cloud::filestore::v1::RestoreInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteInstance(
      google::cloud::filestore::v1::DeleteInstanceRequest const& request)
      override;

  StreamRange<google::cloud::filestore::v1::Backup> ListBackups(
      google::cloud::filestore::v1::ListBackupsRequest request) override;

  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      google::cloud::filestore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::cloud::filestore::v1::Backup>> CreateBackup(
      google::cloud::filestore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::common::OperationMetadata>> DeleteBackup(
      google::cloud::filestore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::filestore::v1::Backup>> UpdateBackup(
      google::cloud::filestore::v1::UpdateBackupRequest const& request)
      override;

 private:
  std::shared_ptr<filestore::CloudFilestoreManagerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<filestore::CloudFilestoreManagerConnection>
MakeCloudFilestoreManagerTracingConnection(
    std::shared_ptr<filestore::CloudFilestoreManagerConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_CONNECTION_H
