#include <stdio.h>
#include "main.h"
/**
* main - FizzBuzz
*
* Description - prints fizzbuzz
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i = 1;

	while (i <= 99)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
		i++;
	}

	i = 100;

	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d", i);
	printf("\n");
	return (0);
}
