#include <unistd.h>
#include "main.h"
/**
* print_most_numbers - I believe in numbers and signs
*
* Description - Write a function that prints the numbers, from 0 to 9, followed
* by a new line
*
* Return: Always 0 (success)
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i == '2')
		{
		}
		else if (i == '4')
		{
		}
		else
			_putchar(i);
	}
	_putchar('\n');
}
