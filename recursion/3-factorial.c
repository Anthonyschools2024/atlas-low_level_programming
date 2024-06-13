#include "main.h"
/**
* factorial - does factorial multiplication recursively?
* Description - see above comment
* @n: the starting factorial
* Return: Always 0 (success)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}