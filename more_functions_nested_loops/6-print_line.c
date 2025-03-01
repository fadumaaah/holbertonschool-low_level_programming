#include "main.h"
#include <stdio.h>

/**
 * print_line - Draw a straight line by printing _ n times
 *
 *@n: number of times _ should be printed
 *
 * Return : void
 *
 */



void print_line(int n)
{
	int start = 0;

	while (start < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			start = start + 1;
		}
	}
}
