#include <stdlib.h>
#include "stringt.h"
#include "lib.h"

t_string string(const char *str)
{
  int len;
  t_string s;

  len = my_strlen(str);
  if ((s = malloc(sizeof(char) * (len + 1) + sizeof(int))) == NULL)
    return (NULL);
  my_strcpy((char*)s, str);
  *(int*)(s + len + 1) = len;
  return (s);
}

int string_len(const t_string s)
{
  char *sp;

  sp = s;
  while (*sp++) ;
  return *(int*)sp;
}
