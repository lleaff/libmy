#include <stdarg.h>
#include <stdlib.h>

void *set_to(void *val, ...)
{
  va_list args;
  void **ptr;

  va_start(args, val);
  while ((ptr = va_arg(args, void*)) != NULL)
  {
    *ptr = val;
  }
  va_end(args);
  return (val);
}
