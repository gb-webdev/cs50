#include <studio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
   {
        n = get_int("Size: ")
   }
    while (n < 1);
    // This ensures the user input is greater than 1, if not, the do while loop will trigger until the condition of user input of n < 1 is met. The input will request will be reset.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("/n");
    }
    // Function int = output | funcion name | (void) = means no inputs
    int get_size(void)
    {
        int n;
        do
        {
            n= get_int("Size ");
        }
        while (n < 1);
        return n;
        
    }

    // Function void = no output | function name | type of input and name of the var
    void print_grid(int size)
    {
        for (int i = 0; i <size; i++)
        {
            for (int i = 0; i <size; i++)
            printf("#");
        }
        printf("\n");
    }

    // Get size of grid
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        // prints lines of bricks
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("/n");
    }
}