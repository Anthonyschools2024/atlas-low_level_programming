#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)	/*need 2 arguments else error*/
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}