#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the parameters
 *
 * @n: number of integers
 *
 * Return: The sum of all paraneters, if n is 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
