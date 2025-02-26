#include <unistd.h>
#include "main.h"

/**
 * _islower -  return 1 if c is lowercase else return 0
 *
 * @c: param to check
 *
 * Return:  1 if lowercase, 0 if not
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
