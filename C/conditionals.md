Conditional expressions allow your programs to make decisions and take different forks in the road, depending on the values of variables, or based on what the user inputs at the programmer, at the command line.

C has a couple of different ways to express conditional expressions, which we also sometimes will call a conditional branch in your programs. Some of these are going to look pretty familiar.

    if

if is a pretty simple conditional, if the expression evaluates to false. The lines of code will not execute.

if boolean expression evaluates to true, all lines of code in the block will execute top to bottom.

    if 
    else

if the boolean expression evaluates to true, all lines of code in the if block will execute from top to bottom.

if the boolean expression evaluates to false, all the lines of code within the else block will execute top to bottom.

    if
    else if
    else if
    else

in C it is possible to create an if-else if-else chain
in this example, each chain is mutualy exclusive

    if 1
    if 2
    if 3
    else 4

it is also possible to create a chain of non-mutually eclusive branches.
in this example, only the third and fourth branches are mutually exclusive. the else binds to the nearest if only.

    int x = GetInt();
    switch(x)
    {
        case 1:
            printf("ONE!\n");
            break;
        case 2:
            printf("TWO!\n");
            break;
        case 3:
            printf("THREE!\n");
            break;
        default:
            printf("Sorry!\n");
    }

C's switch() statement is a conditional statement that permits enumeration of discrete cases, instead of relying on  Boolean expression.
It's important to break; between each case or you will "fall through" each case (unless that is the desired brhavior).

    int x = GetInt();
    switch(x)
    {
        case 5:
            printf("Five ");
            break;
        case 4:
            printf("Four ");
            break;
        case 3:
            printf("Three ");
            break;
        case 2:
            printf("Two ");
            break;
        case 1:
            printf("One ");
            break;
        default:
            printf("BLAST OFF!!\n");
    }

In this example, if the user typed four, they will fall through and trigger fout, three, two, one, blast off.
This is a good example where you would want to "fall through".

    int x;
    if(expr)
    {
        x = 5;        >       int x = (expr) ? 5 : 6;
    }
    else
    {
        x = 6;
    }

These two snippets of code act identically
The ternerary operator (  ?  :  ) is mostly a cute trick, but is useful for writing trivially short conditional branches. Be familiar with it, but know that you won't need to write it if you don't want to.

This is how it works

int x = (expr) ? y : z;

int x = expression Question mark, colon
The thing after the question mark (y) will be x's value if the expression is true
The thing after the colon (z) will be x's value if the expression is false


if(if-else, if-else || if else) - use boolean expressions for decision trees

switch - use discreet cases to make decisions

? : - use to replace very simple if & else statements to shorten your code