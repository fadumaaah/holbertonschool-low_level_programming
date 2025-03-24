#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Sum of a and b
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Sum of a and b
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of a and b
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply a and b
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a by b
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Result of division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Remainder of division of a by b
 *
 * @a: First Integer
 * @b: Second Integr
 *
 * Return: Remainder of division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

