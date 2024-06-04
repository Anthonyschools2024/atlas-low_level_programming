#include "main.h"
/**
* reverse_array - reverses the a string of integers
* Description - reverses a string on integers, where the sting
* is n numbers long
* @a: the inputted string of integers
* @n: how long the given array is
* Return: Always 0 (success)
*/
void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;
	int t;

	while (s < e)
	{
		t = a[s];
		a[s] = a[e];
		a[e] = t;
		s++;
		e--;
	}
}
