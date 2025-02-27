#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if letter is uppercase
 *
 *  @c: paramater to check
 *
 *  Return: 1 if letter is upercase, 0 if otherwise
 *
 */


int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
