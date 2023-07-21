#pragma once

#include <dependency/dependency.h>

bool api() noexcept;

extern "C" {
  bool plugin_init();
}