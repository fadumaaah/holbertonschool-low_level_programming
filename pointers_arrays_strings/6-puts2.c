#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * followed by new line starting with first character
 *
 * @str : String to print
 *
 */

void puts2(char *str)
{
	int index = 0;

	while (*str)
	{
		if (index % 2 == 0)
		{
			_putchar(*str);
		}
		else
		{
			str++;
			index++;
		}
	}
	_putchar('\n');

}
