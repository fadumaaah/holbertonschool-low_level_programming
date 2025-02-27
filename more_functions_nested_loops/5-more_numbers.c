#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers 0 - 14 followed by new line 10 times.
 *
 * Return : void
 *
 */

void more_numbers(void)
{

	int i = 0;

	while (i < 10)
	{
		int num = 0;

		while (num < 15)
		{
		if (num > 9)
		{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');
		num = num + 1;
		}
		_putchar('\n');
		i = i + 1;
	}

}
