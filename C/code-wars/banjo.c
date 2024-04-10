#include <stdlib.h>
#include <stdio.h>

// DESCRIPTION:
// Create a function which answers the question "Are you playing banjo?".
// If your name starts with the letter "R" or lower case "r", you are playing banjo!

// The function takes a name as its only argument, and returns one of the following strings:

// name + " plays banjo" 
// name + " does not play banjo"
// Names given are always valid strings.

char* are_you_playing_banjo(const char* name) {
    char* result = calloc(1, 100);

    if (name[0] == 'R' || name[0] == 'r') {
        sprintf(result, "%s plays banjo", name);
    } else {
        sprintf(result, "%s does not play banjo", name);
    }

    return result;
}