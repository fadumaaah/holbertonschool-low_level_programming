#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers 0 - 9 followed by new line
 *
 * Return : void
 *
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num = num + 1;
	}
	_putchar("\n");

}
