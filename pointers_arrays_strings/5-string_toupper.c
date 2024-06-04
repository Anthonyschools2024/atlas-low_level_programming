#include "main.h"
/**
* string_toupper - changes all lowercase characters to uppercase
* Description - Iterates character by character targetting
* lowercase characters and changing them to uppercase but
* ignoring the rest of them
* @str: the provided string that is being manipulated
* Return: Always 0 (success)
*/
char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - 32;
		}

		temp++;
	}

	return (str);

}
