#ifndef MACROS_H
#define MACROS_H

#ifndef RETURN_IF_NULL
#define RETURN_IF_NULL(x) \
  if ((x) == NULL) \
  { \
    return (NULL); \
  }
#endif /* RETURN_IF_NULL */

#ifndef MALLOC_MB
#define MALLOC_MB(ptr, size) \
  RETURN_IF_NULL(malloc(size));
#endif /* MALLOC_MB */

#ifndef MIN
#define MIN(x, y) ((x) > (y) ? (y) : (x))
#endif /* MIN */

#ifndef MAX
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#endif /* MAX */

#ifndef STRLEN
#define STRLEN(s) (sizeof(s) - 1)
#endif /* STRLEN */

#ifndef ARRLEN
#define ARRLEN(s) (sizeof(s) / sizeof(s[0]))
#endif /* ARRLEN */

#ifndef IS_DIGIT
#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#endif /* IS_DIGIT */

#ifndef CHAR_TO_INT
#define CHAR_TO_INT(c) ((c) - '0')
#endif /* CHAR_TO_INT */


#endif /* MACROS_H */
