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
// source:
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    ~GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy() = default;

std::unique_ptr<GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>
GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>(*this);
}

Idempotency GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    DeleteGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            DeleteGlobalPublicDelegatedPrefixesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    GetGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            GetGlobalPublicDelegatedPrefixesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    InsertGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            InsertGlobalPublicDelegatedPrefixesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    ListGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            ListGlobalPublicDelegatedPrefixesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy::
    PatchGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            PatchGlobalPublicDelegatedPrefixesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>
MakeDefaultGlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy() {
  return std::make_unique<
      GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google
