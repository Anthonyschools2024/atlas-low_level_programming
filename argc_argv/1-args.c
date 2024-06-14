#include "main.h"
/**
*main - counts arguments
*@argc: parameter
*@argv: parameter
*Return: 0
*/

int main(int argc, char *argv[])
{
	int num = argc - 1;	/* argc prints its name first so we have to subtract 1*/
	(void)argv;	/*can I just void this?*/
	printf("%d\n", num);
	return (0);
}