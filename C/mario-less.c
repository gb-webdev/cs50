#include <cs50.h>
#include <stdio.h>

// Pseudocode:
// Input: user int
// Output: #'s arranged into 'block' formation
// Prompt user for input, add a do-while loop to re-prompt if it doesn't match requirements
// Add function with for loops for block printing
// Add for loop for adding spaces to the printed blocks block


int get_height(void);
void print_blocks(int height);

int main(void)
{
    int height = get_height();

    print_blocks(height);

    return 0;
}
//Prompt input function with requirements
int get_height(void)
{
    int height;
    do
    {
        height = get_int("Enter block height: ");
    }
    while (height < 1 || height > 8);
    return height;
}
//print blocks function
void print_blocks(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int space = height - i; space > 0; space--)
        {
            printf(" ");
        }

        for (int m = 1; m <= i; m++)
        {
            printf("#");
        }

        printf("\n");
    }
}