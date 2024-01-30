#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Pseudocode:
// - Add a loop with conditions to ensure argc is 1 arg and int chars
// - Convert argv into an int (atoi)
// - Prompt user for string
// - Check if string is alpha, upper or lower and only perform logic on those
// - Create function to convert ASCII to alphabetical index
// - Convert plaintext to ciphertext ci = (pi + k) %26
// - Convert the result back to ASCII

string rotate(string str, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0; argv[1][i]; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }

    int key = atoi(argv[1]);
    string str = get_string("Enter text to ceipher: ");
    string ciph_str = rotate(str, key);

    printf("ciphertext: %s\n", ciph_str);

    return 0;
}

string rotate(string str, int key)
{
    int length = strlen(str);
    string result = malloc(length + 1);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(str[i]))
        {
            char base_char = isupper(str[i]) ? 'A' : 'a';
            char rotated_char = (str[i] - base_char + key) % 26 + base_char;
            result[i] = rotated_char;
        }
        else
        {
            result[i] = str[i];
        }
    }

    result[length] = '\0';

    return result;
}
