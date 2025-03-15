#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in array
 * @size: size of bytes
 *
 * Return: Pointer to allocated memory or NULL if failure
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < nmemb * size; index++)
		((char *)ptr)[index] = 0;

	return (ptr);


}
