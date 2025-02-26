#include <unistd.h>
#include "main.h"

/**
* times_table - print timetables 0 - 9
*
* Return: Always 0
*
*/

void times_table(void)
{
	int product;
	int multiplier;
	int number;

	for (number = 0; number <= 9 ; number++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = number * multiplier;
			if (product == 0)
			{
				if (multiplier == 0)
					_putchar(product + '0');
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (multiplier < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
