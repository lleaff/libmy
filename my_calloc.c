#include <stdlib.h>
#include "lib.h"

void *my_calloc(size_t size)
{
  void *p;

  if ((p = malloc(size)) == NULL)
    return (NULL);
  my_memset(p, 0, size);
  return (p);
}
