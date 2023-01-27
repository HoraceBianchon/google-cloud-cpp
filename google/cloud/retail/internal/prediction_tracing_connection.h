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
// source: google/cloud/retail/v2/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_PREDICTION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_PREDICTION_TRACING_CONNECTION_H

#include "google/cloud/retail/prediction_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PredictionServiceTracingConnection
    : public retail::PredictionServiceConnection {
 public:
  ~PredictionServiceTracingConnection() override = default;

  explicit PredictionServiceTracingConnection(
      std::shared_ptr<retail::PredictionServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      google::cloud::retail::v2::PredictRequest const& request) override;

 private:
  std::shared_ptr<retail::PredictionServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<retail::PredictionServiceConnection>
MakePredictionServiceTracingConnection(
    std::shared_ptr<retail::PredictionServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_INTERNAL_PREDICTION_TRACING_CONNECTION_H
