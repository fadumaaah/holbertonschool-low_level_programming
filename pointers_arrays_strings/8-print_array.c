#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers, followed by new line
 *
 * @n: number of elements to print
 *
 * @a:Pointer to the array of integers
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
