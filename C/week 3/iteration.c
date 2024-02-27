#include <cs50.h>
#include <stdio.h>

// !!! PLEASE ALSO SEE recursion.c !!!

voiid draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// A demonstration of iteration non recursively
// See recustion.c to see how to do this recursively