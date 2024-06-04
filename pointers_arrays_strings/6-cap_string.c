#include "main.h"
/**
* cap_string - captitalize the first letter of each word after a seperator
* Description - iterates through a provided string, checks to see if the
* the first letter is lowercase if so it makes it uppercase
* @str: the inputted string
* Return: Always 0 (success)
*/
char *cap_string(char *str)
{
	char *s = str;
	char sep[13] = " \t\n,;.!?\"(){}";
	int a = 0;
	int b;
	int c = 1;

	while (s[a] != '\0')
	{
		if (c && s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}

		c = 0;
		b = 0;
		while (b < 13)
		{
			if (s[a] == sep[b])
			{
				c = 1;
			}

			b++;
		}

		a++;
	}

	return (str);
}
