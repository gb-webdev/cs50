Functions also known as 'procedures', 'methods' or 'subroutines are a black box with 0+ outputs and 1 output.

            3   6   7
            v   v   v
            v   v   v
        [add  a,   b,   c]
            v   v   v
              v   v
                v
               [16]

Why is it called a black box? 
Some functions you don't write yourself or know the underlying implementation
We don't care what is under the hood, we only care about the output.

This is why it is advised to have good names for your functions with good documentation.
Also making them small is good too, smaller code is easier to debug.

Declaring a function: 
    - This gives the compiler a heads up that a user written function is appearing in code.
    - Function declerations should always go atop your code
    - there are standard forms that every default function follows
        - return-type name(argument-list);
            - The return-type is the kind of variable the function will output
            - The name is what you want to call your function (make it meaningful)
            - the argument-list is the comma-seperared set of inputs to your function, each of which has a type and a name.

Function definitions:
    - The second step to creating a function is to define it
    - Allow predictable behavior when the function is called with inputs

    - A function definition looks almost identical to a function decleration with a small change (;)

    float mult_floats(double x, double y);  // Decleration

    float mult_floats(double x, double y)  // Function
    {
        return x * y;
    }

Function calls:
    - Now that you have created a function, it's time to use it!
    - To call a function, simply pass it to appropriate arguments and assign it's return value to something of the correct type.

Function miscellany:
    - Functions sometimes take no inputs, in that case, we declare void in the argument list.
    - Functions sometimes have no outputs. If so, declare the function as having a void return type.

    