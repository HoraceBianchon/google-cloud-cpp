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

#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_connection_impl.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

void FeaturestoreOnlineServingServiceStreamingReadFeatureValuesStreamingUpdater(
    google::cloud::aiplatform::v1::ReadFeatureValuesResponse const&,
    google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest&) {}

void TensorboardServiceReadTensorboardBlobDataStreamingUpdater(
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse const&,
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest&) {}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
