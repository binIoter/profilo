/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "runtime.h"

#include "jit/jit.h"
#include "jit/profile_saver.h"

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {

// Returns true if JIT compilations are enabled. GetJit() will be not null in this case.
bool Runtime::UseJitCompilation() const {
  return (jit_ != nullptr) && jit_->UseJitCompilation();
}

} } } } // namespace facebook::museum::MUSEUM_VERSION::art