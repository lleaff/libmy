int   my_getnbr(char *str)
{
  int nbr;
  int sign;

  sign = 1;
  nbr = 0;
  while (*str)
    {
      if (*str == '-')
        {
          sign *= -1;
        }
      else if (*str >= '0' && *str <= '9')
        {
          nbr = (nbr * 10) + *str - '0';
        }
      else if (nbr)
        {
          return (nbr * sign);
        }
      str++;
    }
  return (nbr * sign);
}
