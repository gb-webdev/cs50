#include <cs50.h>
#include <stdio.h>

// In recursion, the base case is the condition to stop the recursion.
// The recursive case is the part where the function calls on itself.

void draw(int n);

int main (void)
{
    draw(1);
}

void draw(int n)
{
    for (int i =0; i < n; i++)
    {
        printf("#");
    }
    printf("/n");
    draw(n +1);
}

// This is a way to use recursion, granted this will cause stack overflow, but it's an example.

// Here is the correct way to use a recursive function.

int main (void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;    // The exit condition ( Base case )
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
