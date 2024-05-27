#include "main.h"
/**
 * _isdigit - this function returns zero.
 *@c: this is the parameter.
 *
 * Return: we want zero.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
