#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if random number is pos/neg or zero and print string
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");


	if ((n % 10) > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	else if ((n % 10) <  5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	else
		printf("%d is %d and is 0\n", n, n % 10);
	return (0);
}
