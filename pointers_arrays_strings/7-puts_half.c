#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints a second half of string, if string odd round up
 *
 * @str : String to print
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			_putchar(str[i]);
	}

	_putchar('\n');

}
