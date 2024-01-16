#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What's your name? ");

    int n = 0; // initialize variable 
    while (name[n] != '\0') // this iterates over the chars, does the char = \0? (\0 = end of array) if no keep iterating
    {
        n++; //iterating chars by 1
    }
    printf("%i\n", n);
}

// This function/method is commonly needed. it is built in to the string.h library above
// The built in method is called " strlen " it does the exact function as above

// This is how it works

int main(void)
{
    string name = get_string("What's your name?");
    int n = strlen(name);
    printf("%i\n", n);
}

// This, the same as above, will print the number characters in your string