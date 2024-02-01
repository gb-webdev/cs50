C allows us to encapsulate and combine variables with different data types

Data Structures - A structure that has multiple values inside of it that you are trying to define 
Here is the syntax:

// defining your structure
typedef struct
{
    string name;
    string number;         // var names and date types
}
person;  // name of structure/data type

This will go at the top of the file below libraries to allow all the file to access these structures

Please view the function below, the information can be accessed with:
structure_name[i].var_name

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

This is very similar looking to some OOP languages. However lacks Inheritance, Polymorphism etc...