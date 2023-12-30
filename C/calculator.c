#include <studio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);

// long is for long int's. int's go past 2 billion and go up to roughly 9 quintillion

    int x = get_long("x: ");
    int y = get_long("y: ");

    printf("%i\n", x + y);

// regular int's will need to be converted to floats in order for int's to be summed with floats. This can be done with (float). This will stop truncation.
    float z = (float) x / (float) y;
    printf("%f\n", z);

// with the limitations of bits, asking for 20 decimal points like below "%.20f". float will do what is called floating-point imprecision. This can be solved by using double, instead of float to get the correct decimals.
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}