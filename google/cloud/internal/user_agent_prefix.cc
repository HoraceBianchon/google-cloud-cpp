// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/compiler_info.h"

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

std::string UserAgentPrefix() {
  static auto const* const kUserAgentPrefix = new auto(
      absl::StrCat("gcloud-cpp/", version_string(), " (", CompilerId(), "-",
                   CompilerVersion(), "; ", CompilerFeatures(), ")"));
  return *kUserAgentPrefix;
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
