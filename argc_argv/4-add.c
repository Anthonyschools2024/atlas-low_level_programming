#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - this is going to add an indescript argv's
* Description - see above comment
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc <= 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= '0' || atoi(argv[i]) >= '9')
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}