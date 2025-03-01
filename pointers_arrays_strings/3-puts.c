#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by new line to stdout
 *
 * @str : String to print
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
