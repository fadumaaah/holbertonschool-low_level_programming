#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draw a diagonal line by printing  \ n times
 *
 *@n: number of times _ should be printed
 *
 * Return : void
 *
 */


void print_diagonal(int n)
{
	int vert = 0;
	int horz = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (vert < n)
		{
			horz = 0;
			while (horz < vert)
			{
				_putchar(' ');
				horz = horz + 1;
			}
			_putchar('\\');
			_putchar('\n');
			vert = vert + 1;
		}
	}
}
