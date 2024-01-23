// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{

    bool has_upper = false;
    bool has_lower = false;
    bool has_symbol = false;
    bool long_enough = false;
    bool has_number = false;

    int length = strlen(password);
    for (int i = 0; i < length; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            has_upper = true;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            has_lower = true;
        }
        else if (password[i] >= '!' && password[i] <= '/')
        {
            has_symbol = true;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            has_number = true;
        }
    }

    if (length >= 8)
    {
        long_enough = true;
    }

    return long_enough && has_upper && has_lower && has_symbol && has_number;
}