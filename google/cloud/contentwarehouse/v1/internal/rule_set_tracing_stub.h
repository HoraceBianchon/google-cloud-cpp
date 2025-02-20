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
// source: google/cloud/contentwarehouse/v1/ruleset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_RULE_SET_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_RULE_SET_TRACING_STUB_H

#include "google/cloud/contentwarehouse/v1/internal/rule_set_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RuleSetServiceTracingStub : public RuleSetServiceStub {
 public:
  ~RuleSetServiceTracingStub() override = default;

  explicit RuleSetServiceTracingStub(std::shared_ptr<RuleSetServiceStub> child);

  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> CreateRuleSet(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> GetRuleSet(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> UpdateRuleSet(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request)
      override;

  Status DeleteRuleSet(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::ListRuleSetsResponse>
  ListRuleSets(grpc::ClientContext& context,
               google::cloud::contentwarehouse::v1::ListRuleSetsRequest const&
                   request) override;

 private:
  std::shared_ptr<RuleSetServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<RuleSetServiceStub> MakeRuleSetServiceTracingStub(
    std::shared_ptr<RuleSetServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_RULE_SET_TRACING_STUB_H
