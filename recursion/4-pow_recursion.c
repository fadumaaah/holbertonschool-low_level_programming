#include "main.h"

/**
 * _pow_recursion - calculate x to the power of y
 *
 * @x: integer
 * @y: the power
 *
 * Return: Result of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	result = x * _pow_recursion(x, y - 1);
	return (result);
}
