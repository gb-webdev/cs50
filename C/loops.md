Loops allow your programs to execute lines of code repeatedly, saving you from needing to copy and paste or repeat lines of code.
C allows different ways to implement loops in your programs, some of which likely look familiar.

    while (true)
    {

    }

This is what we call an infinite loop. the lines of code between the curly braces will execute repeatedly from top to bottom, until otherwise we break out of it with break; or kill our program (ctrl c).

    while (boolean-expr)
    {

    }

If the boolean expression evaluates to true, all lines of cvode between the curly's will execute repeatedly in order from top to bottom until the boolean expression turns to false.

    do
    {

    }
    while (boolean-expr)

This loop will execute lines of code between the curly's once, then if the boolean-expression evaluates to true, will go back and repeat that process until bollean-expr evaluates to fail.

    for (int i = 0; i < 10; i++)
    {                                  >        for (start; expression; increment)

    }

For loops look different syntactically, but for loops are used to repeat the code a specific number of times, in this example 10.

The process in a for loop is:
    The counter variable is set (here it's i)
    The boolean expression is checked
        if it evaluates to true the body of the loop executes (as long as i is less than 10)
        if it evaluates to false, the body does not execute
    The counter variable is incremented and the bollean expression is checked again, repeat etc...


while
    - When you want a loop to repeat an unknown number of times and possible not at all

do-while
    - use when you want a loop to repeat an unknown number of times but at least once

for 
    - For when you want a loop to repeat a discrete number of times. Though you may not know the number at the time the program is complete

