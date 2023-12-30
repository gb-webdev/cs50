#include <cs50.h>
#include <stdio.h>

//A phonebook app letting user know contact info is stored
//A call history is then added 

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("What's your age? ");
    string number = get_string("What's your phone number");

    printf("Age is %i. Name is %s. Phone is %s.", age, name, number);

    //For loop that will show 9 calls max
    //Initialization | Boolean expression | Incrementation

    for (int i = 0; - < 10; i++)
    {
        printf("%i\n", i);
    }
}