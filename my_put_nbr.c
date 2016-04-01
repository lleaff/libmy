#ifndef INT_MIN
#define INT_MIN -2147483648
#endif /* INT_MIN */
#ifndef INT_MIN_STR
#define INT_MIN_STR "-2147483648"
#endif /* INT_MIN_STR */

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif /* INT_MAX */

void  my_putchar(char c);
void  my_putstr(char *str);

char  digit_to_char(int digit)
{
  return (digit + '0');
}

void  my_put_nbr(int n)
{
  int d;

  d = 1;
  if (n < 0)
    {
      if (n == INT_MIN)
        {
          my_putstr(INT_MIN_STR);
          return ;
        }
      my_putchar('-');
      n = -n;
    }
  while (n / d >= 10)
    d *= 10;
  while (d >= 1)
    {
      my_putchar(digit_to_char((n / d) % 10));
      d /= 10;
    }
}

void  my_put_longlong(long long n)
{
  long d;

  d = 1;
  if (n < 0)
    {
      my_putchar('-');
      n = -n;
    }
  while (n / d >= 10)
    d *= 10;
  while (d >= 1)
    {
      my_putchar(digit_to_char((n / d) % 10));
      d /= 10;
    }
}
