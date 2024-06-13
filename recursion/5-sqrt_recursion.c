#include "main.h"
/**
 * helper - helper function
 * @n: number
 * @i: parameter to check
 * Return: result or -1
 */

int helper(int n, int i)
{
	int multiplied = i * i;

	if (n < 0)	/* base case for less than 0*/
	{
		return (-1);
	}
	if (n == 0 || n == 1)	/* base case if equal to 0 or 1*/
	{
		return (n);
	}
	if (multiplied > n) /* sorts through all numbers past n than no square root*/
	{
		return (-1);
	}
	else if (multiplied == n)
	{
		return (i);	/* square root*/
	}
	return (helper(n, i + 1));
}

#include "main.h"
/**
 * _sqrt_recursion - returns square root
 * @n: the number
 * Return: result or -1
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 2));
}