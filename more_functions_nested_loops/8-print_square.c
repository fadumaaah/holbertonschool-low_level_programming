#include "main.h"
#include <stdio.h>

/**
 * print_square - Print a square followed by a new line
 *
 * @size: the size of the square
 *
 * return: void
 *
 */

void print_square(int size)
{
	int vert = 0;
	int horz = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (vert < size)
		{
			horz = 0;
			while (horz < vert)
			{
				_putchar('#');
				horz = horz + 1;
			}
			_putchar('\n');
			vert = vert + 1;
		}
	}

}
