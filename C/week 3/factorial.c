#include <cs50.h>
#include <stdio.h>

// Factorial = the product of an integer and all the integers below it; 
// e.g. factorial four ( 4! ) is equal to 24 (4 * 3 * 2 * 1)
// n! = n * (n-1) * ..... * 1

// This is a recursive function working with factorials
// The function calls on itself multiplying itself by a number -1 
// The function continues until it reaches it's base case, which is 1 where it then quits

int factorial(int number);

int main(void)
{
 int n = get_int("Type a number: ");
 printf("%i\n", factorial(n));
}

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }

    return number * factorial(number -1);
}