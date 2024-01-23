// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string arg2);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Type in 1 string as an argument\n");
        return 1;
    }

    string no_vwl = replace(argv[1]);

    printf("%s\n", no_vwl);

    return 0;
}

string replace(string arg2)
{
    char unwanted_a = 'a';
    char unwanted_e = 'e';
    char unwanted_i = 'i';
    char unwanted_o = 'o';

    int length = strlen(arg2);

    for (int i = 0; i < length; i++)
    {
        if (arg2[i] == unwanted_a)
        {
            arg2[i] = '6';
        }
        else if (arg2[i] == unwanted_e)
        {
            arg2[i] = '3';
        }
        else if (arg2[i] == unwanted_i)
        {
            arg2[i] = '1';
        }
        else if (arg2[i] == unwanted_o)
        {
            arg2[i] = '0';
        }
    }

    return arg2;
}