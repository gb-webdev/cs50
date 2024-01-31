#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Search functions


// This is known as a linear search, it works but can be slow
int main(void) 
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("number: ");
    for (int i = ; i <7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}

// This is still a linear search, however it shows how to do it with strings.
int main(void) 
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "tophat"};

    string s = get_string("string ");
    for (int i = ; i < 6; i++)
    {
        if (srtcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}