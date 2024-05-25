#include <stdbool.h>

// Task
// Create a method to see whether the string is ALL CAPS.

// Examples (input -> output)
// "c" -> False
// "C" -> True
// "hello I AM DONALD" -> False
// "HELLO I AM DONALD" -> True
// "ACSKLDFJSgSKLDFJSKLDFJ" -> False
// "ACSKLDFJSGSKLDFJSKLDFJ" -> True
// In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter
// So any string containing no letters at all is trivially considered to be in ALL CAPS.

bool is_uppercase(const char *source) {
    for (int i = 0; source[i] != '\0'; i++) {
        if (source[i] >= 'a' && source[i] <= 'z') {
            return false;
        }
    }
    return true;
}