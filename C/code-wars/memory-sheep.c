#include <stdlib.h>
#include <stdio.h>

// If you can't sleep, just count sheep!!

// Task:
// Given a non-negative integer, 3 for example 
// Return a string with a murmur: "1 sheep...2 sheep...3 sheep...". 
// Input will always be valid, i.e. no negative integers.

char *count_sheep(int n)
{
    if (n <= 0)
    {
        return strdup("");
    }

    char *result = malloc(n * 12);  // Allocate memory for the murmur

    for (int i = 1; i <= n; i++)
    {
        snprintf(result + strlen(result), n * 12, "%d sheep...", i);
    }

    return result;
}