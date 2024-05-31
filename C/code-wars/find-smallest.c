#include <stddef.h>
#include <stdio.h>

int find_smallest_int(int array[/* len */], size_t len)
{
  for (size_t i = 0; i < len -1; i++) {
    for (size_t j = 0; j < len - i-1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
    return array[0];
}