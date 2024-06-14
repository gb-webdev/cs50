#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trolls are attacking your comment section!

// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

// Your task is to write a function that takes a string and return a new string with all vowels removed.

// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

// Note: for this kata y isn't considered a vowel.

//solution must allocate all required memory
//and return a free-able buffer to the caller.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *disemvowel(const char *str) {
    int length = strlen(str);
    char *new_str = malloc(length + 1);
    if (new_str == NULL) {
        return NULL;
    }
    
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            new_str[j++] = str[i];
        }
    }
    
    new_str[j] = '\0';
    
    return new_str;
}