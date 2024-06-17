#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of int
 * @width: parameter width
 * @height: parameter height
 * Return: pointer to array or null
 */

int **alloc_grid(int width, int height)
{
	int **final;
	int row;
	int col;

	if (width <= 0 || height <= 0)	/*if 0 or less null */
	{
		return (NULL);
	}
	final = malloc(sizeof(int *) * height);	/*make room for rows*/

	if (final == NULL)	/*if null than null*/
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)	/*calculatre rows based on height*/
	{
		final[row] = malloc(sizeof(int) * width);	/*make room for columns*/
		if (final[row] == NULL)
		{
			for (col = 0; col < row; col++)
			{
				free(final[col]);	/*free memory if fail*/
			}
			free(final);	/*free memory*/
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			final[row][col] = 0;	/*initialize all to 0*/
		}
	}
	return (final);
}