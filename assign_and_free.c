#include <stdlib.h>

void *assign_and_free(void **ptr, void *newptr)
{
  void *old;

  old = *ptr;
  *ptr = newptr;
  free(old);
  return (*ptr);
}
