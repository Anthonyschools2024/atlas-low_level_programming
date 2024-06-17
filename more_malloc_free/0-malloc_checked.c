#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: parameter of bytes
 * Return: pointer to memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;	/*pointer to any data type*/

	ptr = malloc(b);	/*make memory for b*/

	if (ptr == NULL)	/*if failed exit 98*/
	{
		exit(98);
	}

	return (ptr);	/*return pointer to memory*/
}