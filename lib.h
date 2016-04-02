#ifndef LIB_H
#define LIB_H

#include "macros.h"
#include "linkedlist.h"
#include "bool.h"
#include "colors.h"
#include "my_memcpy.h"
#include "stringt.h"

void   *noop(const void *, ...);
void   *noop2(const void *, const void *);
void   *my_memset(void *ptr, char byte, size_t n);
void   *my_calloc(size_t n);
int    int_in_arr(int n, const int *arr, int length);
void   my_putchar(char c);
int    my_putstr(const char* str);
extern char g_fill_char;
int    my_putstrn(const char* str, int n);
int    my_putstrnr(const char* str, int n);
int    my_strlen(const char *str);
void   my_put_nbr_base(long long int n, int base, const char *charset);
void   my_put_binary(long long int n);
void   my_put_hex(long long int n);
void   my_put_nbr(int n);
void   my_put_longlong(long long n);
char   *my_readfile(const char* filename);
char   *my_readline();
char   *my_readnchars(int n);
int    int_length_base(long n, int base);
int    int_length(long n);
char   *my_itoa(int n);
char   *my_longlongtoa(long long n);
int    my_getnbr(const char *str);
int    is_int(const char *str);
int    str_eq(const char* str1, const char* str2);
int    my_strcmp(const char *s1, const char *s2);
int    my_strncmp(const char *s1, const char *s2, int n);
int    char_in_str(char c, const char *str);
t_bool str_has(const char *str, char c);
char   *my_strstr(const char *str, const char *to_find);
char   **my_str_to_wordtab(char *str);
void   my_strpush(char* dest, const char* to_push);
void   my_strnpush(char* dest, const char* to_push, int n);
char   *last_n_chars(char* str, int n);
char   *my_strcpy(char* dest, const char* src);
char   *my_strcpy_end(char *dest, const char *src);
char   *my_strcatnew(const char* pre, const char* post);
char   *my_strnew(const char *buffer);
char   *my_strnnew(const char *buffer, int length);
char   *size_to_human_readable(long size);
/* Paths */
t_bool path_is_current(const char *path);
char   *concat_paths(const char *pre, const char *post);
t_bool path_is_dot_ref(const char *path);
void   *set_to(void *val, ...);

#ifdef DEBUG
#include "debug.h"
#endif

#endif /* LIB_H */
