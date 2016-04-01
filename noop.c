#include <stdarg.h>

void *noop(const void *_, ...)
{
    return ((void*)_);
}

void *noop2(const void *_, const void *__)
{
  noop(_);
  return ((void*)__);
}
