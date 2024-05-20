#include <stdio.h>

int main(void) {
    int i;

    // Print the alphabet in lowercase
    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
    putchar('\n');

    // Print the alphabet in uppercase
    for (i = 'A'; i <= 'Z'; i++) {
        putchar(i);
    }
    putchar('\n');

    return 0;
}
