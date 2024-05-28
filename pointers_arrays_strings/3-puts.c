#include <unistd.h>
#include "main.h"
/**
* _puts - I do not fear computers. I fear the lack of them
* Description - Write a function that prints a string, followed by a
* new line, to stdout
* @str: string
* Return: Always 0 (success)
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
