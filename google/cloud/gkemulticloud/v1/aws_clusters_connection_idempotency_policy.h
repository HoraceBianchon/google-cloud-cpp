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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AwsClustersConnectionIdempotencyPolicy {
 public:
  virtual ~AwsClustersConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AwsClustersConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateAwsCluster(
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request);

  virtual google::cloud::Idempotency UpdateAwsCluster(
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request);

  virtual google::cloud::Idempotency GetAwsCluster(
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request);

  virtual google::cloud::Idempotency ListAwsClusters(
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest request);

  virtual google::cloud::Idempotency DeleteAwsCluster(
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request);

  virtual google::cloud::Idempotency GenerateAwsAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request);

  virtual google::cloud::Idempotency CreateAwsNodePool(
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
          request);

  virtual google::cloud::Idempotency UpdateAwsNodePool(
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
          request);

  virtual google::cloud::Idempotency GetAwsNodePool(
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request);

  virtual google::cloud::Idempotency ListAwsNodePools(
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request);

  virtual google::cloud::Idempotency DeleteAwsNodePool(
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
          request);

  virtual google::cloud::Idempotency GetAwsServerConfig(
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request);
};

std::unique_ptr<AwsClustersConnectionIdempotencyPolicy>
MakeDefaultAwsClustersConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_IDEMPOTENCY_POLICY_H
