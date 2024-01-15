#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) // args c is argument count | arg v is the empty array of words for the string.
{                                 // 
    string name = get_string("What's your name? ");
    printf("hello, %s\n", argv[1]); // in [0] is the program name (greet)
}

// This allows for an argument to be typed in when the program runs by using ./ eg. $./filename arg
//  It saves being prompted and having to wait for the promppt but to type it all in 1


//example 
// $ make greet    >> file compiled
// $ ./greet graham  >> file ran with arg
// $ hello, graham   >> returned

// You can also play with argc with conditionals etc for the argument count to return different outcomes.