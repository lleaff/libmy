#include "lib.h"
#include <stdlib.h>

int fail(const char *msg)
{
  my_puterr(msg);
  return (0);
}

int failn(const char *msg, int n)
{
  my_puterrn(msg, n);
  return (0);
}

void *fail_ptr(const char *msg)
{
  my_puterr(msg);
  return (NULL);
}
