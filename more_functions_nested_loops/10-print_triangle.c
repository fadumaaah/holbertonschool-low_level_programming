#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle followed by a new line
 *
 * @size: the size of the triangle
 *
 * return: void
 *
 */

void print_triangle(int size)
{
	int vert = 0;
	int horz = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (vert = 1; vert <= size; vert++)
		{
			for (horz = 1; horz <= (size - vert); horz++)
			{
				_putchar(' ');
			}

			for (horz = 1; horz <= vert; horz++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
