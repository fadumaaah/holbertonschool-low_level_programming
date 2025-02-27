#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if paramater is a digit from 0-9
 *
 *  @c: paramater to check
 *
 *  Return: 1 if c is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
