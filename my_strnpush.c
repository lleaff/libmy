void my_strnpush(char* dest, const char* toPush, int n)
{
    while (*dest)
        dest++;
    while (n-- && *toPush)
        *dest++ = *toPush++;
    *dest = '\0';
}
