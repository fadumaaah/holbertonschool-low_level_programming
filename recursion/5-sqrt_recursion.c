#include "main.h"

/**
 * _sqrt_recursion - find the natural square root of a number
 *
 * @n: integer to find square root of
 *
 * Return: Square root of n, if n does not have square root return -1
 *
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (checkroot(n, 1)); /*start with 1*/
}

/**
 * checkroot - check if guess is natural square root
 *
 * @root: current guess of square root
 * @n: integer to find square root
 *
 * Return: squareroot if found, else return -1;
 */

int checkroot(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (checkroot(n, root + 1));
}
