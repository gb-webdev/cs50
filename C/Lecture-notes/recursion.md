Recursion in code refers to a programming technique where a function calls itself in order to solve a smaller instance of the same problem. In other words, a recursive function is one that performs a task in part and delegates the remaining part of the task to itself. The process continues until a base case is reached, at which point the function stops calling itself and returns a result.

Recursion involves breaking down a problem into smaller, more manageable sub-problems, solving each sub-problem using the same approach, and combining the solutions to obtain the final result. This technique is often used in algorithms and functions that exhibit repetitive structures.

Think back to the phonebook tearing lecture, searching and throwing away half the size of the problem every time when searching for a the value.

Recursion always needs an exit condition, or else recursion can become dangerous as a function will call itself infinitely (stack overflow).

Here is an example of a recursive function:

int factorial(int n);

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("Factorial of %d is %d.\n", num, result);
    }

    return 0;
}

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

// The base case is the condition to stop the recursion. The recursive case is the part where the function calls on itself.