#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Function that returns number for the name when searched for in the phonebook
// It is poorly written, if names are added to the phone book but a number is missing, it will cause issues.
// If either is sorted in any other way it will also ruin the order and return false results 
int main (void) 
{
    string names[] = {"Carter", "David", };
    string numbers[] = {"+1-619-111-0000", "+1-619-888-4444"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    reutn 1;
}

// There is a better way to make a phonebook with data structures
   
typedef struct phonebook
{
    string numbers[] = {"+1-619-111-0000", "+1-619-888-4444"};
    string names[] = {"Carter", "David", };
}
person;

int main (void) 
{

    person people[2];

    people[0].name = "Carter"
    people[0].number = "+1-619-111-0000"

    people[1].name = "David"
    people[1].number = "+1-619-888-4444"

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    reutn 1;
}

// Granted this structure is not the best code syntatically 
// But this will make more sense down the line with databases etc.