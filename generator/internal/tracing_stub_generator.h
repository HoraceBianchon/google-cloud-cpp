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

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_TRACING_STUB_GENERATOR_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_TRACING_STUB_GENERATOR_H

#include "generator/internal/printer.h"
#include "generator/internal/stub_generator_base.h"
#include "google/cloud/status.h"
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/descriptor.h>
#include <map>
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

/**
 * Generates the tracing stub for a particular service.
 */
class TracingStubGenerator : public StubGeneratorBase {
 public:
  TracingStubGenerator(
      google::protobuf::ServiceDescriptor const* service_descriptor,
      VarsDictionary service_vars,
      std::map<std::string, VarsDictionary> service_method_vars,
      google::protobuf::compiler::GeneratorContext* context);

  ~TracingStubGenerator() override = default;

  TracingStubGenerator(TracingStubGenerator const&) = delete;
  TracingStubGenerator& operator=(TracingStubGenerator const&) = delete;
  TracingStubGenerator(TracingStubGenerator&&) = default;
  TracingStubGenerator& operator=(TracingStubGenerator&&) = default;

 private:
  Status GenerateHeader() override;
  Status GenerateCc() override;
};

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_TRACING_STUB_GENERATOR_H
