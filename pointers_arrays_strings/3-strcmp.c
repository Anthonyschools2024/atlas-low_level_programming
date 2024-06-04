#include "main.h"
/**
* _strcmp - compares two strings against each other
* Description - takes s1 and compares it to s2 and prints the value if
* they are not the same
* @s1: the first string
* @s2: the second string
* Return: Always 0 (success)
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
