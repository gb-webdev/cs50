#include <stdbool.h>

// Implement a function which convert the given boolean value into its string representation.

// Note: Only valid inputs will be given.

const char *boolean_to_string(bool b)
{
    if (b == true)
      {
        return "true";
      }
    else
      {
        return "false";
      }
}