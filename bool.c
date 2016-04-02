#include "bool.h"

const char *bool_str(t_bool b)
{
  static const char true_str[] = "TRUE";
  static const char false_str[] = "FALSE";

  return (b == false ? false_str : true_str);
}
