// Create a function that gives a personalized greeting.
// This function takes two parameters: name and owner.

#include <stdio.h>
#include <string.h>


const char* greet(const char *name, const char *owner) {
    
  if (strcmp(name, owner) == 0) 
    {
      return "Hello boss";
    }
  else
    {
      return "Hello guest";
    } 
}