//===--------- adapters.hpp - Level Zero Adapter --------------------------===//
//
// Copyright (C) 2023 Intel Corporation
//
// Part of the Unified-Runtime Project, under the Apache License v2.0 with LLVM
// Exceptions. See LICENSE.TXT
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include <atomic>
#include <mutex>
#include "logger/ur_logger.hpp"

struct ur_adapter_handle_t_ {
  std::atomic<uint32_t> RefCount = 0;
  std::mutex Mutex;
  logger::Logger logger = logger::create_logger("level_zero");
};

extern ur_adapter_handle_t_ Adapter;


