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

    //forever/infinite loop, good for event listeners etc | See llama for other do while use
    while (true) // or while (1) 1 = true 0 = false. true/1 will never = false so the loop will go on forever.
    {
        printf("meow/n")
    }

    int n;
    do
    {
        n = get_int("n: ");
    } 
    while (n <= 0);
    //Do wile loops run the code first and ask a question later, they're perfect for getting input from the user.

    int age;
    do {
        age = get_int("Age: ");
    }
    while (age < 15 || age > 20);

    for (int i = 1; i <= 5; i++)
    {
        
    }
    //Adding a do while loop can save writing a conditional inside a loop. Here we re-prompt for a users age if it's not in between 15-20
}