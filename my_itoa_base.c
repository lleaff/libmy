#include "lib.h"

#define ITOA_BUFFER_SIZE 300 

#include <stdio.h>/* DEBUG */
void _my_longlongtoa_base(long long int n, int base,
    const char *charset, char *str)
{
  long long int num;

  num = n % base;
  n = n / base;
  if (n != 0)
    _my_longlongtoa_base(n, base, charset, str);
  append_char(str, charset[ABS(num)]);
}

char  *my_longlongtoa_base(long long int n, int base,
    const char *charset)
{
  char buffer[ITOA_BUFFER_SIZE];

  buffer[0] = '\0';
  if (n < 0)
    append_char(buffer, '-');
  _my_longlongtoa_base(n, base, charset, buffer);
  return (my_strnew(buffer));
}

char *my_itoa_base(long long int n, int base, const char *charset)
{
  return (my_longlongtoa_base(n, base, charset));
}

void _my_longlongunsignedtoa_base(long long unsigned int n, int base,
    const char *charset, char *str)
{
  long long unsigned int num;

  num = n % base;
  n = n / base;
  if (n > 0)
    _my_longlongunsignedtoa_base(n, base, charset, str);
  append_char(str, charset[num]);
}

char  *my_longlongunsignedtoa_base(long long unsigned int n, int base,
    const char *charset)
{
  char buffer[ITOA_BUFFER_SIZE];

  buffer[0] = '\0';
  _my_longlongunsignedtoa_base(n, base, charset, buffer);
  return (my_strnew(buffer));
}
