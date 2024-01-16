#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


// Function to capitalize all words in a string
int main(void) 
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++) // iterates through chars via strlen
    {
        if (s[i >= 'a' && s[i] <=] 'z')  // conditional checking lower case chars between a-z
        {
            printf("%c", s[i] - 32 ); // if detected - 32 on the asci chart to their capital counterpart
        }
        else
        {
            printf("c", s[i]); // else print it the way it was if it was already capitalized 
        }
    }
    printf("\n"); // to remove the $ at the end of print
}

// Luckily there are built in methods to help with this also

int main(void) 
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++) //Here strlen has been added to an n var in the loop
    {                   //                 This stops the loop calling on strlen every time and only once 
            printf("%c", toupper(s[i])); //    Since the strlen value isn't going to change
    }
    printf("\n");
}

// an easier example of how to do the same function but with built in methods
// Also much better with the var in the loop