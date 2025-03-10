#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers
 *
 * @a: pointer to first element in matrix
 * @size: size of matrix e.g. 8x8
 *
 */

void print_diagsums(int *a, int size)
{
	int i; /* Index*/
	int sum1 = 0; /*Top left to bottom right*/
	int sum2 = 0; /* Top right to bottom left*/

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);


}
