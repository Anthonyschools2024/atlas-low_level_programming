#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square
 * @a: parameter 1
 * @size: parameter 2
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int count;
	int s1 = 0;
	int s2 = 0;

	for (count = 0; count < size; count++)
	{
		s1 += a[count];
		a += size;
	}

	a -= size;

	for (count = 0; count < size; count++)
	{
		s2 += a[count];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}