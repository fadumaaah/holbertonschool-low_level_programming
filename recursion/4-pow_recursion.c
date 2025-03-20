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
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
