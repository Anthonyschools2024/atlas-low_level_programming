#include "main.h"
#include <stdio.h>
/**
* main - prints one arg at a time
* Description - see above comment
* @argc: the arg count
* @argv: the arg vectors
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}