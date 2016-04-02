#include "lib.h"
#include <unistd.h>

void my_puterr(const char *msg)
{
  write(STDERR_FILENO, msg, my_strlen(msg));
}

void my_puterrn(const char *msg, int n)
{
  write(STDERR_FILENO, msg, n);
}

void my_putcharerr(char c)
{
  write(STDERR_FILENO, &c, 1);
}
