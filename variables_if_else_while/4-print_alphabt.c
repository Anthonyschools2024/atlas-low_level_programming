#include <stdio.h>

int main() {
    char letter;

    // Loop through the lowercase alphabets
    for (letter = 'a'; letter <= 'z'; letter++) {
        // Check if the current character is not 'q' or 'e'
        if (letter!= 'q' && letter!= 'e') {
            // Print the character using putchar
            putchar(letter);
        }
    }

    // New line after printing the alphabet
    putchar('\n');

    return 0;
}

