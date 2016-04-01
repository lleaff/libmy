#include <stdlib.h>

int my_strncmp(const char *s1, const char *s2, int n);

char *my_strstr(const char *str, const char *to_find)
{
  int to_find_l;

  to_find_l = 0;
  while (to_find[to_find_l])
    to_find_l++;
  to_find_l--;
  while (*str)
    {
      if (*str == *to_find)
        {
          if (!my_strncmp(str, to_find, to_find_l))
            return ((char*)str);
        }
      str++;
    }
  return (NULL);
}
