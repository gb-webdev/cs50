#include <cs50.h>
#include <stdio.h>

int cash(int purchase);

int main(void)
{

    int purchase;
    do
    {
        purchase = get_int("Enter number between 0 and 100: ");
    }
    while (purchase < 0);

    int remaining = 100 - purchase;
    int counter = cash(remaining);

    // printf("Change Owed: %i \n", remaining);
    printf("%i\n", counter);
}

int cash(int purchase)
{

    int remaining_2 = 100 - purchase;
    int counter = 0;

    while (remaining_2 > 0)
    {
        if (remaining_2 >= 25)
        {
            remaining_2 -= 25;
        }
        else if (remaining_2 >= 10)
        {
            remaining_2 -= 10;
        }
        else if (remaining_2 >= 5)
        {
            remaining_2 -= 5;
        }
        else
        {
            remaining_2 -= 1;
        }
        counter++;
    }
    return counter;
}
