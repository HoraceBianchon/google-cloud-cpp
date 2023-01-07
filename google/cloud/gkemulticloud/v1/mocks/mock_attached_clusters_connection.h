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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_ATTACHED_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_ATTACHED_CLUSTERS_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/attached_clusters_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AttachedClustersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AttachedClustersClient`. To do so,
 * construct an object of type `AttachedClustersClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockAttachedClustersConnection
    : public gkemulticloud_v1::AttachedClustersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>,
      CreateAttachedCluster,
      (google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>,
      UpdateAttachedCluster,
      (google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>,
      ImportAttachedCluster,
      (google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>,
      GetAttachedCluster,
      (google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>,
      ListAttachedClusters,
      (google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>,
      DeleteAttachedCluster,
      (google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>,
      GetAttachedServerConfig,
      (google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::
                   GenerateAttachedClusterInstallManifestResponse>,
      GenerateAttachedClusterInstallManifest,
      (google::cloud::gkemulticloud::v1::
           GenerateAttachedClusterInstallManifestRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_ATTACHED_CLUSTERS_CONNECTION_H
