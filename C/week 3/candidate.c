#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{
    // candidate president = get_candidate("Enter a candidate: ");
    // printf("%s\n", president.name);
    // printf("%i\n", president.votes);

    // Can also be added in as an array:

    candidate candidates_array[3];
    for (int i = 0; i < 3; i++)
    {
        candidates_array[i] = get_candidate("Enter a candidate: ");
    }
    printf("%s\n", candidates_array[0].name);
    printf("%i\n", candidates_array[0].votes);
    printf("%s\n", candidates_array[1].name);
    printf("%i\n", candidates_array[1].votes);
    printf("%s\n", candidates_array[2].name);
    printf("%i\n", candidates_array[2].votes);
}

candidate get_candidate(string prompt) // type, function name(argument data type argument)
{
    printf("%s\n", prompt);

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter a number of votes: ");
    return c;
}