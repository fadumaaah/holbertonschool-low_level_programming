#include "main.h"
#include <stdio.h>

/**
 * mul - Multiply two integers print result
 *
 * @a: integer 1 to multiply
 * @b: integer 2 to multiply
 *
 *  Return: Product of a * b
 *
 */

int mul(int a, int b)
{
	int n = a * b;

	printf("%d", n);
	return (n);
}
