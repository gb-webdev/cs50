Structures are great ways of storing data for different data types to a specific variable type
this variable can be called on with dot notation

In this case it's for a politiical candidate:

typedef struct    // struct decleration (reusable)
{
    string name;     // struct data types and names
    int votes;
}
candidate;       // type name

In this variable called president with the type candidate we are storing a name and amount of votes
Dots (.) reference the attributes of a struct

candidate president;
president.name = "Alyssa";
president.votes = 10;

These however are not objects because they don't have functions tied to them like in other languages

