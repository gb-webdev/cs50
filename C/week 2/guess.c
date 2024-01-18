#include <cs50.h>
#include <stdio.h>

// Debug and see what is wrong with this code

//Original
// int main(void)
// {
//     int number = 5;

//     int guess = get_int("Guess a number between 1 and 10? ");

//     while (guess != number)
//     {
//         printf("wrong guess!");
//     }
//
//     printf("You're correct!");
// }


int main(void)
{
    int number = 5;

    int guess = get_int("Guess a number between 1 and 10? ");

    if (guess != number)
    {
        printf("wrong guess!");
    }
    else
    {
        printf("You're correct!");
    }
}