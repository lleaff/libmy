#include "lib.h"
#include <stdlib.h>

int fail(const char *msg)
{
  my_puterr(msg);
  return (0);
}

void *fail_ptr(const char *msg)
{
  my_puterr(msg);
  return (NULL);
}
