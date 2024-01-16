#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hours[] = {7, 9, 8, 7, 8}; // How to declare an array in a var

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", hours[i]) // This will print the numbers, 1 per line. because \n will start a new line 
    }
}