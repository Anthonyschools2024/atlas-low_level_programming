#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array with all values from min-max
 * @min: parameter 1
 * @max: parameter 2
 * Return: pointer to new array or null
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int count;

	if (min > max)	/*min cant be greater than max*/
	{
		return (NULL);
	}
	size = max - min + 1;	/*size is the max - min, add 1 for null*/
	array = malloc(sizeof(int) * size);	/*memory for size of array*/
	if (array == NULL)	/*if failed null*/
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)	/*cycle through*/
	{
		array[count] = min;	/*array is created with all values from min to max*/
		min++;
	}
	return (array);
}