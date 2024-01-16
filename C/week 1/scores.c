#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 =73;
    int score3 = 33;

    printf("Average %f\n", (score1 + score2 + score3) / 3.0); // = 59.33
}

// The average test score was going to be a floating point value. However, the compiler did not like it.
// Since the score var's were ints and there were no floats in the sum.
// this was fixed however when we added the .0 on the 3, allowing the compiler to accept a floating point value.
// As long as there is 1 floating point value in the sum, the compiler will create the file and display a float.

printf("Average %f\n", (score1 + score2 + score3) / (float) 3);

// It can also be type-casted like so for the compiler to create the file