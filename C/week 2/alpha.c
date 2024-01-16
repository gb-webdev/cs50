#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Check if a lowercase strings characters are in alphabetical order. If yes print 'Yes', if no print 'No'

int main(void)
{
    string word = get_string("Word: ");

    int length = strlen(word);
    for(int i = 0; i <  - 1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("No");
            return 0;
        } 
    }
    printf("Yes\n");
}
