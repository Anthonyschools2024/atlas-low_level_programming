#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
* Description - see above
* @separator: prints inbetween the strings
* @n: the amount of strings
* Return: Always 0 (success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (n != 0)
	{
		va_list(ap);

		va_start(ap, n);

		printf("%s", va_arg(ap, char *));

		for (i = 1; i < n; i++)
		{
			char *app = va_arg(ap, char *);

			if (separator != NULL)
				printf("%s", separator);
			if (app == NULL)
				printf("(nil)");
			else
				printf("%s", app);
		}
	va_end(ap);
	}
	putchar('\n');
}