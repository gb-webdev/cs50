#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check_phrase(string);

int main(void)
{
    string phrase = get_string("What's the secret phrase? ");

    bool correct = check_phrase(phrase);

    if (correct == true)
    {
        printf("Come on in!\n");
    }

}

bool check_phrase(string check_phrase)
{
    string password = "Please";

    if (strcmp(phrase, password) == 0)
    {
        return true;
    }

    return false;
}

// comparing strings will not work with the strict equality operator in C
// strcmp is needed instead from the string.h library.
// is the striings match, a 0 is returned.