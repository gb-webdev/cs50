#include <cs50.h>
#include <stdio.h>

//Data type | var name | assignment operator | value
int calls = 4;

//Why does C care about data types? 
//It prepares for space to reserve for the data, but binary can represent more types of data, so C needs to know which data to represent the correct output
//eg. 65 == A in binary

int calls = 4;
{
    printf("calls is %i\n", calls);
}

// %i is format code, a placeholder for user input stored in the variable.
// Types of format code int(%i) long (%li) char (%c) float (%f) double (%f) string (%s)
// Longs and doubles store 8 billion values instead of 4 billion, more space if needed.


