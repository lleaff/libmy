#include "lib.h"

/*
 * Append a string to another and return the number of appended
 *  characters.
 */
int my_strcat(char* dest, const char* toAppend)
{
  int i;

  while (*dest)
    dest++;
  for (i = 0; toAppend[i]; i++)
    *dest++ = toAppend[i];
  *dest = '\0';
  return (i);
}

/*
 * Concat two strings to a newly allocated one.
 */
char *my_strcatnew(const char* pre, const char* post)
{
  char *res;
  int  l_pre;
  int  l_post;

  l_pre = my_strlen(pre);
  l_post = my_strlen(post);
  if ((res = malloc(l_pre + l_post + 1)) == NULL)
    return (NULL);
  my_memcpy(res, pre, l_pre);
  my_memcpy(res + l_pre, post, l_post);
  res[l_pre + l_post] = '\0';
  return (res);
}
