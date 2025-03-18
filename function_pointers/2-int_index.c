#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: array to search integer in
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element that matches
 *		if no element matches return -1
 *		if size less than 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1); /* if no match is found*/


}
