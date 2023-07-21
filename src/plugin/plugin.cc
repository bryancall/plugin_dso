#include <api/api.h>
#include <fmt/core.h>

bool plugin_init() {
  fmt::print("Here in plugin_init()\n");

  return api();
}
