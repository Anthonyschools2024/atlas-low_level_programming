#include "main.h"
/**
* _pow_recursion - recursizely calculating powers
* Description - takes variable x with a power of y and calculates
* @x: base variable
* @y: power variable
* Return: Always 0 (success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}