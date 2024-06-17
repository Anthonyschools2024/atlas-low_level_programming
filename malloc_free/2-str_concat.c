#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - this fuction is going to combine two strings
 * Description - see above comment
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, count = 0, j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		count++;
	}
	new_str = malloc(sizeof(char) * count);
	while (1)
	{
		if (s1 == NULL)
		{
			break;
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				new_str[j] = s1[i];
				j++;
			}
		}
		if (s2 == NULL)
		{
			break;
		}
		else
		{
			for (i = 0; s2[i] != '\0'; i++)
			{
				new_str[j] = s2[i];
				j++;
			}
		}
		j++;
		new_str[j] = '\0';
		return (new_str);
	}
	return (NULL);
}