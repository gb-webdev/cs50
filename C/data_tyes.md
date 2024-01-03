 int - the int data type is used for variables that will store integers.
Integers always take up to 4 bytes of memory (32 bits). This means the range of the values can store is necessarily limited to 32 bits pf information.

 char - The char data type is used for varables that will store single characters.
Characters always take up to 1 byte of memory (8 bits). This means the range of values they can store is necessarily liimited to 8 bits worth of information.
Thanks to ASCII, we've developed a mapping of chharacters like A, B, C etc... to numeric values in the positive side of this range.

 float - The float data type is used for variables that will store floating point values, also known as real numbers.
Floating point values always take up to 4 bytes of memory (32 bits)
It's a little complicated to describe the range of a float, but suffice it to say with 32 bits of precision, some of which might be used for an integer part, we are limited in how precise we can be. 

 double - The double data type is used for variables that will store floating point values, also known as real numbers.
The difference is that doubles are double precision. They always take 8 bytes of memory (64 bits).
With an additional 32 bits of precision ralative to a float, doublles allow us to be specify much more precise real numbers.

 void - is a type, but not a data type.
Functions can have a void return type, which just means they don't return a value.
The parameter list of a function can also be void. It simply means the function takes no parameters.
For now, think of void more as a placeholder for "nothing". it's more complex than that, but this should suffice the better part of the course.
Printf is an example of a function that will have a void return type. it does not return or store a value to return it or manipulate. It just prints something to the screen and that's it, it's done.
 
 bool - The bool data type is used for variables that will store a Boolean value. More precisely, they are capable only of storing one of two values: true and false.
Be sure to #include <cs50.h> atop your progreams if you wish to use bool types.

 string - The string data type is used for variables that will store a series of characters, which programmers typically call a string.
Strings include things such as words, sentences, paragraphs and the like.
Be sure to #include <cs50.h> atop your progreams if you wish to use the string type.

There are also structurs which can use multiple data types.

Creating a variable
specify the data type of the variable and give it a name.

int number;
char letter;

if you wish to create multiple var's of the same type, you specify the type ONCE, then list as many variables of that type as you want.

int height, width;
float sqrt2, sqrt3, pi;

Using a Variable
After a variable has been declared, it's no longer necessary to specify that variables type. in fact, doing to has some unintended consequences.

int number; //decleration
number = 17; // assignment
char letter; //decleration
letter = 'H' // assignment

if you are simultaneously declaring ad setting the value of a variable (sometimes called initializing), you can consolidate this to one step.

int number = 17; //initialization
char letter = 'H'; //initialization
