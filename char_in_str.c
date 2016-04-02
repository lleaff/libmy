#include "bool.h"

int char_in_str(char c, const char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return (i);
    return (-1);
}

t_bool str_has(const char *str, char c)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return (true);
    return (false);
}
