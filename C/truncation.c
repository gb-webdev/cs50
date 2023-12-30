#include <studio.h>
#include <cs50.h>

int main(void)
{
    // How to print basic sums

    int a = 2;
    int b = 3;
    int c = a / b;
    printf("%i", c)
    //This will return 0 due to truncation

    int a = 2;
    int b = 3;
    int c = (float) a / b;
    printf("%f", c)
    // Adding (float) and changing the %i to %f will stop the truncation since the output will not move to a decimal place
}