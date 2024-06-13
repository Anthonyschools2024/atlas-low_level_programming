#include "main.h"
#include <stdio.h>

/**
 * Prototype declaration
 */
void _print_rev_recursion(char *s);

/**
 * Prints a string in reverse recursively
 * @param s The string to print in reverse
 */
void _print_rev_recursion(char *s) {
    // Base case: if the string is empty, return
    if (*s == '\0') {
        return;
    }

    // Recursive call for the rest of the string
    _print_rev_recursion(s + 1);

    // Print the current character
    printf("%c", *s);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original: %s\n", str);
    _print_rev_recursion(str);
    printf("\nReversed: ");
    return 0;
}
