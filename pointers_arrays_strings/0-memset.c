#include "main.h"
/**
* _memset - sets the array to the provided input for n number of spaces
* in the array
* Description - for n number of spaces in array s it sets it equal to b
* @s: the inputed array
* @b: the given value being inputted
* @n: the amount of spaces in array s being set to b
* Return: Always 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}