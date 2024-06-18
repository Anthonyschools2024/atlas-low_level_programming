#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - combines two strings with a number of bytes
 * @s1: string 1
 * @s2: string 2
 * @n: the bytes
 * Return: pointer to new memory of s1+s2, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int lens1 = 0, lens2 = 0, lentotal = 0;
	unsigned int index;

	if (s1 == NULL)	/*if null treat as empty*/
	{
		s1 = "";
	}
	if (s2 == NULL)	/*if null treat as empty*/
	{
		s2 = "";
	}
	while (s1[lens1])	/*find length of s1*/
	{
		lens1++;
	}
	while (s2[lens2] && lens2 < n)	/*find length of s2 with n bytes*/
	{
		lens2++;
	}
	lentotal = lens1 + lens2 + 1;	/*total of memory plus null byte*/
	combined = malloc(sizeof(char) * lentotal);	/*make memory*/
	if (combined == NULL)	/*if fail null*/
	{
		return (NULL);
	}
	lentotal = 0;
	for (index = 0; s1[index]; index++)	/*add s1 to combined*/
	{
		combined[lentotal++] = s1[index];
	}
	for (index = 0; s2[index] && index < n; index++)	/*add s2 of n bytes*/
	{
		combined[lentotal++] = s2[index];
	}
	combined[lentotal] = '\0';	/*add null byte*/
	return (combined);
}