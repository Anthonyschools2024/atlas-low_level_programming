#include <unistd.h>
#include "main.h"
/**
* print_rev - I can only go one way. I've not got a reverse gear
* Description - Write a function that prints a string, in reverse, followed
* by a new line
* @s: variable
* Return: Always 0 (success)
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c > 0)
	{
		_putchar(s[c - 1]);
		c--;
	}
	_putchar('\n');
}
