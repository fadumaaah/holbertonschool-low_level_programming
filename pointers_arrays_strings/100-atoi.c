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
	int index = 0;
	int result = 0;
	int sign = 1;

	while (s[index] == ' ') /* Skip spaces*/
		index++;

	if (s[index] == '-') /* Account for - or + */
	{
		sign = -1;
		index++;
	}
	else
		index++;

	while (s[index] >= '0' && s[index] <= '9') /* Account for numbers*/
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}

	/* Apply negative*/

	result = result * sign;


	if (result == 0)
		return (0);
	else
		return (result);




}
