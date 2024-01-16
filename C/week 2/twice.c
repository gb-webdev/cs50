#include <cs50.h>
#include <stdio.h>

// Create a program that prompts the user for a size, n.
// Dynamically create an array of that size, where each element is 2 times the previous one.
// Start the array at 1.
// Print the array, integer by integer.

int main(void)
{
    // Get length from user
    int length;
    do
    {
        length = get_int("Length: ");
    }
    while (length < 1);

    // Declare the array
    int twice[length];

    // Set the first value
    twice[0] = 1;
    printf("%i\n", twice[0]);

    for (int i = 1; i < length; i++)
    {
        // Make the current element twice the previous
        twice[i] = 2* twice[i - 1];
        // print out the current element
        printf("%i\n", twice[i]);
    }
}