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
// source: google/cloud/speech/v1/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_INTERNAL_SPEECH_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_INTERNAL_SPEECH_TRACING_CONNECTION_H

#include "google/cloud/speech/speech_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SpeechTracingConnection : public speech::SpeechConnection {
 public:
  ~SpeechTracingConnection() override = default;

  explicit SpeechTracingConnection(
      std::shared_ptr<speech::SpeechConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::speech::v1::RecognizeResponse> Recognize(
      google::cloud::speech::v1::RecognizeRequest const& request) override;

  future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(
      google::cloud::speech::v1::LongRunningRecognizeRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v1::StreamingRecognizeRequest,
      google::cloud::speech::v1::StreamingRecognizeResponse>>
  AsyncStreamingRecognize() override;

 private:
  std::shared_ptr<speech::SpeechConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<speech::SpeechConnection> MakeSpeechTracingConnection(
    std::shared_ptr<speech::SpeechConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_INTERNAL_SPEECH_TRACING_CONNECTION_H
