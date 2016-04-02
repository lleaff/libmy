#include <stdlib.h>
#include "stringt.h"
#include "lib.h"

/*
 * Concatenate a linked list (t_ll) of strings (t_string).
 */
t_string string_concat_ll(const t_ll *strings)
{
  t_ll *node;
  int len;
  t_string s;
  char *cur;

  for (node = (t_ll*)strings, len = 0; node != NULL; node = node->next)
    len += string_len((t_string)node->data);
  if ((s = malloc(sizeof(char) * (len + 1) + sizeof(int))) == NULL)
    return (NULL);
  cur = s;
  for (node = (t_ll*)strings; node != NULL; node = node->next)
    cur = my_strcpy_end(cur, node->data);
  *(int*)(cur + 1) = len;
  return (s);
}
