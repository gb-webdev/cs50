#include <cs50.h>
#include <stdio.h>

// Pseudocode- Input: int >>> Output: int
// prompt for an int
// check if int is odd or even
//    if int is even, divide by 2
//    if int is odd times int by 3 and add 1
//    repeat until int == 0
// count steps it took to get to 1

int collatz_even(int prompt, int *count);
int collatz_odd(int prompt, int *count);

int main(void)
{
    int prompt = get_int("Enter an integer: ");
    int count = 0;

    if (prompt == 0)
    {
        printf("Please enter a number greater than 0\n");
    }
    else if (prompt % 2 == 0)
    {
        printf("%i\n", collatz_even(prompt, &count));
    }
    else
    {
        printf("%i\n", collatz_odd(prompt, &count));
    }
}

int collatz_even(int prompt, int *count)
{
    if (prompt == 1)
    {
        return *count;
    }
    else
    {
        *count += 1;
        return collatz_even(prompt / 2, count);
    }
}

int collatz_odd(int prompt, int *count)
{
    if (prompt == 1)
    {
        return *count;
    }
    else
    {
        *count += 1;
        return collatz_odd(prompt * 3 + 1, count);
    }
}


// harvard solution

int collatz(int n)
{
    if (n == 1)
    return 0;

    else if ((n % 2) == 0)
    return 1 + collatz(n/2);

    else
    return 1 + collatz(3*n + 1);
}