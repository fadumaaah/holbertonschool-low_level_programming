#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts string into integer
 *
 * @s: String to be converted
 *
 * Return: Integer value of string otherwise return 0
 *
 * Description: Function converts a string into an integer
 * ignore any non-number characters, take into account any
 * leading + or - before the number.
 *
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	do {
		/*Skip spaces*/
		if (*s == '-')
			sign = sign * -1;

		/*Convert digits to Int*/
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');

		/*Only account for numbers if not then disregard*/
		else if (result > 0)
			break;
	} while (*s++);
	/*make result positive or negative*/
	return (result * sign);

}
