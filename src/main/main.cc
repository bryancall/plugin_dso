#include <fmt/core.h>
#include <dlfcn.h>

//----------------------------------------------------------------------------
int main(int argc, char** argv) {
  fmt::print("Here in main()\n");

  void *handle = dlopen("./libplugin.so", RTLD_NOW | RTLD_LOCAL);

  if (!handle) {
    fmt::print("Error: {}\n", dlerror());
    return 1;
  }

  auto plugin_init = (bool (*)())dlsym(handle, "plugin_init");

  if (!plugin_init) {
    fmt::print("Error: {}\n", dlerror());
    dlclose(handle);
    return 1;
  }

  fmt::print("Calling plugin_init...\n");
  plugin_init();

  dlclose(handle);
  return 0;
}
