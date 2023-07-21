#include <dependency/dependency.h>
#include <fmt/core.h>

bool api() {
  fmt::print("Here in api()\n");

  dependency();

  return true;
}
