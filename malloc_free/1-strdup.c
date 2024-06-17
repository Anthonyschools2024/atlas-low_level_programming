#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - this duplicates a string
 * Description - see above comment
 * @str: the provided string
 * Return: Always 0 (success)
*/
char *_strdup(char *str)
{
	char *new_str;
	int i, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	while (1)
	{
		new_str = malloc(sizeof(char) * count + 1);

		if (new_str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < count; i++)
		{
			new_str[i] = str[i];
		}
		return (new_str);
	}
}