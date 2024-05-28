#include <unistd.h>
#include "main.h"
/**
* _strlen - This report, by its very length, defends itself against the
* risk of being read
* Decription - Write a function that returns the length of a string
* @s: used to point to the string of the main function
* Return: Always 0 (success)
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
