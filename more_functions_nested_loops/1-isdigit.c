#include <unistd.h>
#include "main.h"
/**
* _isdigit - The standard library provides a similar function: isdigit. Run man
* isdigit to learn more
*
* Description - Write a function that checks for a digit
*
* @c: variable for the digit
*
* Return: Always 0 (success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
