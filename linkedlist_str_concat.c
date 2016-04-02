#include "lib.h"
#include "linkedlist.h"

/*
 * Concatenate a linked list (t_ll) of strings (char*).
 */
char *ll_concat_str(const t_ll *strings)
{
  t_ll *node;
  int len;
  char* s;
  char *cur;

  for (node = (t_ll*)strings, len = 0; node != NULL; node = node->next)
    len += my_strlen((char*)node->data);
  if ((s = malloc(sizeof(char) * (len + 1) + sizeof(int))) == NULL)
    return (NULL);
  cur = s;
  for (node = (t_ll*)strings; node != NULL; node = node->next)
    cur = my_strcpy_end(cur, (char*)node->data);
  *(int*)(cur + 1) = len;
  return (s);
}
