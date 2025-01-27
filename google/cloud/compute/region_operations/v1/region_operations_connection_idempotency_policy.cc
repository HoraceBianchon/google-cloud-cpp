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
// source: google/cloud/compute/region_operations/v1/region_operations.proto

#include "google/cloud/compute/region_operations/v1/region_operations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionOperationsConnectionIdempotencyPolicy::
    ~RegionOperationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionOperationsConnectionIdempotencyPolicy>
RegionOperationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionOperationsConnectionIdempotencyPolicy>(*this);
}

Idempotency RegionOperationsConnectionIdempotencyPolicy::DeleteRegionOperations(
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionOperationsConnectionIdempotencyPolicy::GetRegionOperations(
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionOperationsConnectionIdempotencyPolicy::ListRegionOperations(
    google::cloud::cpp::compute::region_operations::v1::
        ListRegionOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionOperationsConnectionIdempotencyPolicy::Wait(
    google::cloud::cpp::compute::region_operations::v1::WaitRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionOperationsConnectionIdempotencyPolicy>
MakeDefaultRegionOperationsConnectionIdempotencyPolicy() {
  return std::make_unique<RegionOperationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_operations_v1
}  // namespace cloud
}  // namespace google
