#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters
 *		and initalise it with a specific character
 *
 * @size: size of array
 * @c: specific character to initalise array
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == '\0')
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
