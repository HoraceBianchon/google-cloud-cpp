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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/internal/edge_container_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EdgeContainerTracingConnection::EdgeContainerTracingConnection(
    std::shared_ptr<edgecontainer::EdgeContainerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerTracingConnection::ListClusters(
    google::cloud::edgecontainer::v1::ListClustersRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::ListClusters");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::Cluster>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerTracingConnection::GetCluster(
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  auto span =
      internal::MakeSpan("edgecontainer::EdgeContainerConnection::GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCluster(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::CreateCluster(
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  return child_->CreateCluster(request);
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::UpdateCluster(
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  return child_->UpdateCluster(request);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteCluster(
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  return child_->DeleteCluster(request);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerTracingConnection::GenerateAccessToken(
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAccessToken(request));
}

StreamRange<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerTracingConnection::ListNodePools(
    google::cloud::edgecontainer::v1::ListNodePoolsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::ListNodePools");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListNodePools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::NodePool>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerTracingConnection::GetNodePool(
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  auto span =
      internal::MakeSpan("edgecontainer::EdgeContainerConnection::GetNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNodePool(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::CreateNodePool(
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  return child_->CreateNodePool(request);
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::UpdateNodePool(
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  return child_->UpdateNodePool(request);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteNodePool(
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  return child_->DeleteNodePool(request);
}

StreamRange<google::cloud::edgecontainer::v1::Machine>
EdgeContainerTracingConnection::ListMachines(
    google::cloud::edgecontainer::v1::ListMachinesRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::ListMachines");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListMachines(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::Machine>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerTracingConnection::GetMachine(
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  auto span =
      internal::MakeSpan("edgecontainer::EdgeContainerConnection::GetMachine");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMachine(request));
}

StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerTracingConnection::ListVpnConnections(
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::ListVpnConnections");
  auto scope = absl::make_unique<opentelemetry::trace::Scope>(span);
  auto sr = child_->ListVpnConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::VpnConnection>(
      std::move(span), std::move(scope), std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerTracingConnection::GetVpnConnection(
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer::EdgeContainerConnection::GetVpnConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVpnConnection(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
EdgeContainerTracingConnection::CreateVpnConnection(
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  return child_->CreateVpnConnection(request);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteVpnConnection(
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  return child_->DeleteVpnConnection(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<edgecontainer::EdgeContainerConnection>
MakeEdgeContainerTracingConnection(
    std::shared_ptr<edgecontainer::EdgeContainerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EdgeContainerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_internal
}  // namespace cloud
}  // namespace google
