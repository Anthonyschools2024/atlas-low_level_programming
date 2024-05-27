#include "main.h"
#include <ctype.h>

/**
 * is_digit - Checks if a character is a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
    return isdigit(c);
}
