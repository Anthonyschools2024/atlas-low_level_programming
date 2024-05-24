#include "main.h"

/**
 * is_alphabetic - Checks if a character is alphabetic.
 * @c: Character to check.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int is_alphabetic(char c)
{
    return isalpha(c);
}

int main(void)
{
    char test_char;

    /* Testing the function with various characters */
    test_char = 'A';
    printf("%d\n", is_alphabetic(test_char)); // Should print 1

    test_char = 'a';
    printf("%d\n", is_alphabetic(test_char)); // Should print 1

    test_char = '0';
    printf("%d\n", is_alphabetic(test_char)); // Should print 0

    test_char = ' ';
    printf("%d\n", is_alphabetic(test_char)); // Should print 0

    return 0;
}
