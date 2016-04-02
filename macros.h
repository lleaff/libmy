#ifndef MACROS_H
#define MACROS_H

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
