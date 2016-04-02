char *my_strcpy(char *dest, const char *src)
{
  char *start = dest;
  while (*src)
    *dest++ = *src++;
  *dest = '\0';
  return (start);
}

/*
 *  Same as my_strcpy but returns a pointer to the end of the destination
 * string instead of the beginning.
 */
char *my_strcpy_end(char *dest, const char *src)
{
  while (*src)
    *dest++ = *src++;
  *dest = '\0';
  return (dest);
}
