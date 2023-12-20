#include <cs50.h>
#include <studio.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    int i = 1;
    while (i <= 3)
    {
        printf("meow\n");
        i++;
    }

    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    //best practice since it contains important code on 1 line
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }

    //forever loop, good for event listeners etc
    while (true) // or while (1) 1 = true 0 = false. true/1 will never = false so the loop will go on forever.
    {
        printf("meow/n")
    }
}