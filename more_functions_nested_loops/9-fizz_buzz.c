#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1- 100 followed by new line
 *	for multiples of 3 print fizz
 *	for multiples of 5 print buzz
 *	for multiples of both print fizzbuzz
 *
 * Return: Always 0;
 *
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
		n = n + 1;
	}

	printf("\n");
	return (0);
}
