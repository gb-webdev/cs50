#include <cs50.h>
#include <stdio.h>

// Write a function to check if a 3 sided shape is a true triangle.
// A true triangle must not have 1 side that excedes size of the other 2 added sides
// And of course a triangle can not have a side with a negative number

bool tri_true(int x, int y, int z);

int main(void)
{
    bool tri_true(int x, int y, int z)
    {
        if (
            x + y <= z ||
            x + z <= y ||
            y + z <= x ||
            x < 0 ||
            y < 0 ||
            z < 0
           )
           {
            return false;
           }
           else
           {
            return true;
           }
    }
}