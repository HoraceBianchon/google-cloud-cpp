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
// source: grafeas/v1/grafeas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_GRAFEAS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_GRAFEAS_TRACING_CONNECTION_H

#include "google/cloud/containeranalysis/grafeas_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class GrafeasTracingConnection : public containeranalysis::GrafeasConnection {
 public:
  ~GrafeasTracingConnection() override = default;

  explicit GrafeasTracingConnection(
      std::shared_ptr<containeranalysis::GrafeasConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<grafeas::v1::Occurrence> GetOccurrence(
      grafeas::v1::GetOccurrenceRequest const& request) override;

  StreamRange<grafeas::v1::Occurrence> ListOccurrences(
      grafeas::v1::ListOccurrencesRequest request) override;

  Status DeleteOccurrence(
      grafeas::v1::DeleteOccurrenceRequest const& request) override;

  StatusOr<grafeas::v1::Occurrence> CreateOccurrence(
      grafeas::v1::CreateOccurrenceRequest const& request) override;

  StatusOr<grafeas::v1::BatchCreateOccurrencesResponse> BatchCreateOccurrences(
      grafeas::v1::BatchCreateOccurrencesRequest const& request) override;

  StatusOr<grafeas::v1::Occurrence> UpdateOccurrence(
      grafeas::v1::UpdateOccurrenceRequest const& request) override;

  StatusOr<grafeas::v1::Note> GetOccurrenceNote(
      grafeas::v1::GetOccurrenceNoteRequest const& request) override;

  StatusOr<grafeas::v1::Note> GetNote(
      grafeas::v1::GetNoteRequest const& request) override;

  StreamRange<grafeas::v1::Note> ListNotes(
      grafeas::v1::ListNotesRequest request) override;

  Status DeleteNote(grafeas::v1::DeleteNoteRequest const& request) override;

  StatusOr<grafeas::v1::Note> CreateNote(
      grafeas::v1::CreateNoteRequest const& request) override;

  StatusOr<grafeas::v1::BatchCreateNotesResponse> BatchCreateNotes(
      grafeas::v1::BatchCreateNotesRequest const& request) override;

  StatusOr<grafeas::v1::Note> UpdateNote(
      grafeas::v1::UpdateNoteRequest const& request) override;

  StreamRange<grafeas::v1::Occurrence> ListNoteOccurrences(
      grafeas::v1::ListNoteOccurrencesRequest request) override;

 private:
  std::shared_ptr<containeranalysis::GrafeasConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<containeranalysis::GrafeasConnection>
MakeGrafeasTracingConnection(
    std::shared_ptr<containeranalysis::GrafeasConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_GRAFEAS_TRACING_CONNECTION_H
