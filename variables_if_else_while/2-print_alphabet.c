#include <stdio.h>

int main(void) {
    int i;

    /* Loop through the ASCII values of lowercase letters */
    for (i = 'a'; i <= 'z'; i++) {
        /* Print each letter using putchar */
        putchar(i);
    }

    /* Newline character */
    putchar('\n');

    return 0;
}

