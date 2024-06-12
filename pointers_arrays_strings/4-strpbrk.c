#include "main.h"

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: s or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *count = accept;

	while (*s != '\0')
	{
		while (*count != '\0')
		{
			if (*s == *count)
			return (s);
			count++;
		}
		s++;
	}
	return (NULL);
}