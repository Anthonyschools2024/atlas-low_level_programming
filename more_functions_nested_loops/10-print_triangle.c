#include <unistd.h>
#include "main.h"
/**
* print_triangle - Triangles
*
* Description - Write a function that prints a triangle, followed by a new line
*
* @size: the number of rows in the triangle
*
* Return: Always 0 (success)
*/
void print_triangle(int size)
{
	int a = 1;
	int b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (a <= size)
	{
		b = size;
		c = 1;

		while (b - a > 0)
		{
			_putchar(' ');
			b--;
		}
		while (c <= a)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		a++;
	}
}
