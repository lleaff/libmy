int my_strncmp(char *s1, char *s2, int n);

char *my_strstr(char *str, char *to_find)
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
            return (str);
        }
      str++;
    }
  return ("null");
}
