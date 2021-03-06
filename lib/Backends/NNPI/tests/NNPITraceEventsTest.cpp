/*
 * Copyright (c) Glow Contributors. See CONTRIBUTORS file.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "tests/unittests/BackendTestUtils.h"

using namespace glow;

std::set<std::string> glow::backendTestBlacklist = {
    "multipleRunsAreDistinct/0", "manualEvents/0",
    "multipleBackingTensors/0",  "internalGap/0",
    "onlyTraceEvents/0",         "twoCompiles/0",
    "manualAndAutomatic/0",      "incompleteCoverage/0",
    "deviceManagerEvents/0",     "automaticInstrumentation/0",
};
