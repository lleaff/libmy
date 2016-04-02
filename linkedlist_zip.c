#include <stdlib.h>
#include "linkedlist.h"
#include "lib.h"

t_ll *ll_zip(t_ll *a, t_ll *b)
{
  if (a == NULL)
    return (b);
  a->next = ll_zip(b, a->next);
  return (a);
}
