Scope is a characteristic of a variable that defined from which functions that variable may be accessed.

    - Local variables can only be accessed within the functions in whyich they are created.
    - Global variables can be accessed by any function in the program.

Global variables must be declared outside of a function in order to be used in multiple functions.

    - Be wary of functions changing the value of the variable.
    - If a function changes the value of a var, the manipulated result is then passed to the next function.
    - this can have unwanted/unpredicted outcomes.

Why does this distinction matter? 

    - For the most part, local variables in C are passed by value in function calls.
    - When a var is passed by value, the callee recieves a copy of the passed var, not the var itself.
    - That means that the var in the caller is unchanged unless overwritten.

