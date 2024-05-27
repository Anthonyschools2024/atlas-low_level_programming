#include "main.h"
/**
 * print_most_numbers - printing some numbers
 * @void: it is indeed a void
 *
 * Return: returning all numbers but two and four
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}

	_putchar ('\n');
}
