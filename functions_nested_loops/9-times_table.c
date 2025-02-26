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
			if (product < 10)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product < 81)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(product + '0');
			}
		}	
	}
}
