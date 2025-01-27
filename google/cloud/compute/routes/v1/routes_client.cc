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
// source: google/cloud/compute/routes/v1/routes.proto

#include "google/cloud/compute/routes/v1/routes_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_routes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RoutesClient::RoutesClient(ExperimentalTag,
                           std::shared_ptr<RoutesConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RoutesClient::~RoutesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesClient::DeleteRoutes(std::string const& project, std::string const& route,
                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::routes::v1::DeleteRoutesRequest request;
  request.set_project(project);
  request.set_route(route);
  return connection_->DeleteRoutes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesClient::DeleteRoutes(
    google::cloud::cpp::compute::routes::v1::DeleteRoutesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRoutes(request);
}

StatusOr<google::cloud::cpp::compute::v1::Route> RoutesClient::GetRoutes(
    std::string const& project, std::string const& route, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::routes::v1::GetRoutesRequest request;
  request.set_project(project);
  request.set_route(route);
  return connection_->GetRoutes(request);
}

StatusOr<google::cloud::cpp::compute::v1::Route> RoutesClient::GetRoutes(
    google::cloud::cpp::compute::routes::v1::GetRoutesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRoutes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesClient::InsertRoutes(
    std::string const& project,
    google::cloud::cpp::compute::v1::Route const& route_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::routes::v1::InsertRoutesRequest request;
  request.set_project(project);
  *request.mutable_route_resource() = route_resource;
  return connection_->InsertRoutes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesClient::InsertRoutes(
    google::cloud::cpp::compute::routes::v1::InsertRoutesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRoutes(request);
}

StreamRange<google::cloud::cpp::compute::v1::Route> RoutesClient::ListRoutes(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::routes::v1::ListRoutesRequest request;
  request.set_project(project);
  return connection_->ListRoutes(request);
}

StreamRange<google::cloud::cpp::compute::v1::Route> RoutesClient::ListRoutes(
    google::cloud::cpp::compute::routes::v1::ListRoutesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRoutes(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routes_v1
}  // namespace cloud
}  // namespace google
