#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @n: number of elements of the array
 * @a: pointer to array of integers
 */

void reverse_array(int *a, int n)
{
	int start;
	int end = n - 1;
	int temp;

	if (n <= 0)
		return;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}

	return (a);
}
