#include <stdlib.h>

#pragma weak dependency

void __attribute__((weak)) dependency() {
  abort();
}
