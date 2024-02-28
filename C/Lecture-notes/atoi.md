digit: This represents the integer value of the current character in the string. Since we're dealing with ASCII values, subtracting '0' from the character gives us the integer equivalent of the digit.

convert(input + 1): This is a recursive call to the convert function with the next character in the string (input + 1). This call converts the remaining substring into an integer recursively.

10 * convert(input + 1): This recursive call multiplies the result of converting the remaining substring by 10. This is done because each digit's place in a number is ten times the place value of the digit to its right (e.g., in the number 123, the value of '1' represents 100, '2' represents 20, and '3' represents 3).

digit + 10 * convert(input + 1): Finally, we add the integer value of the current character (digit) to the result obtained from converting the remaining substring multiplied by 10. This effectively accumulates the integer values of each digit in the string, effectively converting the entire string into a single integer.

So, by recursively processing each character in the string and accumulating their values using the formula digit + 10 * convert(input + 1), we convert the entire string into a single integer.


#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    if (*input == '\0')
    {
        return 0;
    }

    int digit = *input - '0';

    return digit + 10 * convert(input + 1);
}