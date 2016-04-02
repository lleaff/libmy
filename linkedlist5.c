#include "linkedlist.h"

t_ll* ll_copyn(t_ll* node, int n)
{
  t_ll* copied;

  if (node == NULL || n == 0)
    return (NULL);
  copied = ll_new(node->data);
  copied->next = ll_copyn(node->next, n - 1);
  return (copied);
}
