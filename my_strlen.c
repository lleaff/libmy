int my_strlen(const char *str)
{
    int i;

    i = 0;
    while (*str++)
        i++;
    return (i);
}
