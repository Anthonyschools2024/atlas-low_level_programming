#include "main.h"
/**
 * main - function prints name
 * @argc: arg count
 * @argv: arg vector
 * Return: name
 */

int main(int argc, char *argv[])
{
	if (argc > 0)	/*if its more than 0 there is at least 1 argument*/
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}