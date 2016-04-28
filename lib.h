#ifndef LIB_H
#define LIB_H

#include "types.h"
#include "macros.h"
#include "linkedlist.h"
#include "colors.h"
#include "my_memcpy.h"
#include "stringt.h"
#include "assign_and_free.h"

void   *noop(const void *, ...);
void   *noop2(const void *, const void *);
/* Errors */
void   my_puterr(const char *msg);
void   my_puterrn(const char *msg, int n);
void   my_putcharerr(char c);
int    fail(const char *msg);
int    failn(const char *msg, int n);
void   *fail_ptr(const char *msg);
/* Memory */
void   *my_memset(void *ptr, char byte, size_t n);
void   *my_calloc(size_t n);
int    int_in_arr(int n, const int *arr, int length);
void   my_putchar(char c);
int    my_putstr(const char* str);
extern char g_fill_char;
int    my_putstrn(const char* str, int n);
int    my_putstrnr(const char* str, int n);
int    my_strlen(const char *str);
void   my_put_nbr_base(t_llint n, int base, const char *charset);
void   my_put_binary(t_llint n);
void   my_put_hex(t_llint n);
void   my_put_nbr(int n);
void   my_put_longlong(long long n);
char   *my_readfile(const char* filename);
char   *my_readline();
char   *my_readnchars(int n);
int    int_length_base(t_llint n, int base);
int    int_length(t_llint n);
char   *my_itoa(int n);
char   *my_longlongtoa(long long n);
char   *my_longlongunsignedtoa(t_lluint n);
char   *my_itoa_base(t_llint n, int base, const char *charset);
char   *my_longlongtoa_base(t_llint n, int base, const char* charset);
char   *my_longlongunsignedtoa_base(t_lluint n, int base, const char *charset);
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
char   *append_char(char *str, char c);
char   *my_strcat(char* dest, const char* toAppend);
int    my_strcatl(char* dest, const char* toAppend);
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
