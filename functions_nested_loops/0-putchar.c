#include "main.h"

/**
 * main - prints "_putchr \n" without libraries
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchr";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchr(str[i]);
	}

	_putchr('\n');

	return (0);
}

  
