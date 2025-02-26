#include <unistd.h>
#include "main.h"

/**
 * _isalpha -  return 1 if c is an alphabetic character else return 0
 *
 * @c: param to check
 *
 * Return:  1 if an alphabetic character, 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
