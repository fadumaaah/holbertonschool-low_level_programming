#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print numbers 0 - 9, excluding 2 & 4.
 *
 * Return : void
 *
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num == 2 || or num == 4)
		{
			num = num + 1;
		}
		else
		{
			_putchar(num + '0');
			num = num + 1;
		}
	}
	_putchar('\n');

}
