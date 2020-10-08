/**
* Copyright (c) 2016-present, Facebook, Inc.
*
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

//
// Copyright (c) 2017, NVIDIA CORPORATION. All rights reserved.
// NVIDIA/apex is licensed under the
// BSD 3 - Clause "New" or "Revised" License
//

/* Modifications Copyright (c) Microsoft. */

#pragma once
#include "core/providers/hip/hip_common.h"

namespace onnxruntime {
namespace contrib {
namespace rocm {

template <typename T, typename U>
void HostApplyLayerNorm(
    const hipDeviceProp_t& prop,
    T* output,
    U* mean,
    U* invvar,
    const T* input,
    int64_t n1,
    int64_t n2,
    double epsilon,
    const T* gamma,
    const T* beta);

}  // namespace rocm
}  // namespace contrib
}  // namespace onnxruntime
