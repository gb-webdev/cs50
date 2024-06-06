#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool sheep[/* count */], size_t length)
{
  int count = 0;
  
  for (int i = 0; i < length; i++)
    {
      if (sheep[i] == true)
        {
          count++;
        }
    }
  return count;
}