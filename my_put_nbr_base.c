#include "lib.h"

static void _my_put_nbr_base(long long int n, int base, const char *charset)
{
  long long int num;

  num = n % base;
  if (num > 0)
  {
    _my_put_nbr_base(n / base, base, charset);
    my_putchar(charset[num]);
  }
}

void  my_put_nbr_base(long long int n, int base, const char *charset)
{
  if (n < 0)
    my_putchar('-');
  if (n == 0)
    my_putchar(charset[0]);
  else
    _my_put_nbr_base(n, base, charset);
}

void  my_put_hex(long long int n)
{
  my_put_nbr_base(n, 16, "0123456789ABCDEF");
}

void  my_put_binary(long long int n)
{
  my_put_nbr_base(n, 2, "01");
}
