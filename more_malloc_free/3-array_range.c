#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Create an array of integers
 *containing all values from min to max
 *
 * @min: starting minimum value of array
 * @max: starting maximum value of array
 *
 * Return: Pointer to newly created array
 *
 */


int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min = min + 1;
	}

	return (array);
}
