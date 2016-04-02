char *append_char(char *str, char c)
{
  while (*str)
    str++;
  *str++ = c;
  *str = '\0';
  return (str);
}
