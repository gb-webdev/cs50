// Define String.prototype.toAlternatingCase
// Or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase
// In your selected language; see the initial solution for details)
// Such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

// to_alternating_case("hello world"); // => "HELLO WORLD"
// to_alternating_case("HELLO WORLD"); // => "hello world"
// to_alternating_case("hello WORLD"); // => "HELLO world"
// to_alternating_case("HeLLo WoRLD"); // => "hEllO wOrld"
// to_alternating_case("12345"); // => "12345" (Non-alphabetical characters are unaffected)
// to_alternating_case("1a2b3c4d5e"); // => "1A2B3C4D5E"
// to_alternating_case("String.prototype.toAlternatingCase"); // => "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
// As usual, your function/method should be pure, i.e. it should not mutate the original string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_alternating_case(const char *s) {
  
  int length = strlen(s);
  char *new = malloc(length + 1);
  for (int i = 0; i < length; i++)
    {
      if ((s[i] >= 'A' && s[i] <= 'z'))
          {
        if (s[i] == toupper(s[i]))
            {
              new[i] = tolower(s[i]);
            }
        else
            {
              new[i] = toupper(s[i]);
            }
          }
      else
        {
          new[i] = s[i];
        }
    }
  new[length] = '\0';
  
  return new;
}