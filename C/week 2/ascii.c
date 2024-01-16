#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Emma";
    int length = strlen(name);
    for (int i = 0; i < length; i++)
    {
        printf("%c ", name[i])
    }
}
// This function will print " E m m a " due to %c printing the characters of the looped index


int main(void)
{
    string name = "Emma";
    int length = strlen(name);
    for (int i = 0; i < length; i++)
    {
        printf("%i ", name[i])
    }
    printf("\n");
}
// This function will print " 69 109 109 97 " due to the %i rinting the ASCII number of the index 
// you can also use logic and maths on the ASCII numbers 