#include <cs50.h>
<include stdio.h>

int main (int argc, string argv[])
{
    if (arg c != 2)
    {
        printf("missing command-line argument\n");
    }
    else
    {
        printf("hello, %s\n", argv[1]);
    }
}

// Here we have a basic function, we will use it to find out about status codes
// Running " $ echo $? " in the terminal will reveal what status code you got returned
// After recieving "missing command-line argument" we recieved a status code 0
// even though it is not the outcome that we wanted we got a "0" returned to us.
// In c, a 0 is a successful return.
// A good thing to do in c is return 1 for conditionals in some cases to track our outcomes.
// Do an example below.

int main (int argc, string argv[])
{
    if (arg c != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0;
    }
}

// here is how it's done, although the 0 is not needed on the else as it will be shown as 0 already