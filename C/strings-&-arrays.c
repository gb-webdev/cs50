#include <cs50.h>
#include <sdio.h>

int main(void)
// Strings under the hood are just arrays
{
string S = "HI!"
     // [0][1][3]
}
// This string will take up 4 bytes due to a hidden char on every string array

//     HI!\0

// The computer knows to print out every char of a string until it sees a 0
// Technically it's not an actual string 0 or number 0, it's actually a NUL ascii 0

int main(void)
{
    char c1 = "H";
    char c2 = "I";
    char c3 = "!";

    printf("%C%C%C\n", c1, c2, c3);
}

int main(void)
{
    string s = "HI!";
    printf("%C%C%C\n", s[0], s[1], [2]);
}

// These 2 functions print the same outcome, strings are accessed like arrays by individual chars in []
// If a fourth char is attemted to be accessed ( [3] ) it will print a 0

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%C%C%C\n", words[0][0], words[0][1], words[0][2]);
    printf("%C%C%C%C\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}

// PRINT: HI!
//        BYE!

// Since strings are technically arrays, they can be accessed through the indexes like so.
// Code will most likely be written this way, it's just an example for how to access them incase needed.