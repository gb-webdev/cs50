Arithmetic Operators

In C we can add (+), subtract (-), multiply (*) and divide (/) as expected.

We also have modulus operator (%) which gives us the remainder when the number on the left of the operatoor is divided by the number on the right.

int m = 13 % 4; // m is now 1

if we sum m again like below 

m + 4 

m will = 5 now, since the new stored value of m is the value after whatever sums were done prior in the above code.

C also provides a shorthand way to apply an arithmetic operator to a single variable.

x = x * 5;
x *= 5;

This trick works with all 5 basic arithmetic opperators. C provides a further shorthand for incrementing or decrementing a variable by 1.

x++;
x--;

Boolean experssions

Boolean expressions are used in C for comparing values.

All Boolean experssions in C evaluate to one of two possible values - true or false.

We can use the result of evaluating a Boolean expression in other programming constructs such as deciding which branch in a coinditional to take, or determining whether a loop should continue to run.

Sometimes when working with Boolean expressions we will use variables of type bool, but we don't have to.
In C, every nonzero value is equivalent to true, and every zero is false.
Two main types of Boolean expressions: logical operators and relational operators.

Logical and && 
Logical or ||
Logical not !
Relational operators 
Less than < 
Less than or equal to <=  
Greater than >
Greater than or equal to >=
Equality ==
Inequality !=

