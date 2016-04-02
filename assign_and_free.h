#ifndef ASSIGN_AND_FREE_H
#define ASSIGN_AND_FREE_H

#define ASSIGN_AND_FREE(ptr, newptr) \
  assign_and_free((void**)&(ptr), (newptr))

void *assign_and_free(void **ptr, void *newptr);

#endif /* ASSIGN_AND_FREE_H */
