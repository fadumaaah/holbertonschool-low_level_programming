#include <unistd.h>
#include "main.h"

/**
* jack_bauer - print every minute from 00:00 to 23:59
*
* Return: Always 0
*
*/

void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		min = min + 1;
		}
		hour = hour + 1;
	}
}
