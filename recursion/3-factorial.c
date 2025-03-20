#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: given number to factorial
 *
 * Return: factorial, else return -1 if n < 0.
 */

int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	result = n * factorial(n -  1);

	return (result);
}
