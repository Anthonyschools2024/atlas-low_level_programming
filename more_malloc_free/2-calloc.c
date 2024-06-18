#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: parameter number of elements
 * @size: parameter of bytes
 * Return: pointer to the memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *zero;
	unsigned int count;

	if (nmemb == 0 || size == 0)	/*if elements and bytes are zero than null*/
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);	/*memory for elements and bytes*/

	if (ptr == NULL)	/*if failed than null*/
	{
		return (NULL);
	}

	zero = ptr;	/*pointer to ptr that replaces with zero*/

	for (count = 0; count < nmemb * size; count++)	/*cycle through*/
	{
		*(zero++) = 0;	/*as it cycles zero replaces it with 0's*/
	}

	return (ptr);	/*return the pointer all 0's*/

}