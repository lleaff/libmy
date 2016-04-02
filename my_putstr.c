#include <unistd.h>
#include "lib.h"

int my_putstr(const char* str)
{
  int len;

  len = my_strlen(str);
  write(STDOUT_FILENO, str, len);
  return (0);
}

char g_fill_char = ' ';

int my_putstrn(const char* str, int n)
{
  int i;
  char c;
  int end;

  for (i = 0, end = 0; i < n; i++)
  {
    if (!end)
      end = str[i] == '\0';
    c = !end ? str[i] : g_fill_char;
    my_putchar(c);
  }
  return(0);
}

/* Right-aligned my_putstrn */
int my_putstrnr(const char* str, int n)
{
  int i;
  int len;
  char c;
  int offset;

  len = my_strlen(str);
  offset = n - len;
  for (i = 0; i < n; i++)
  {
    if (i < offset)
      c = g_fill_char;
    else
      c = str[i - offset];
    my_putchar(c);
  }
  return(0);
}
