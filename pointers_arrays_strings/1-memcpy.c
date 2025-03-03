#include "main.h"
#include <stdio.h>

/**
 *_memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to memory block where data from src will be copied
 * @src: pointer to memory block where date should be copied from
 * @n: number of bytes to copy
 *
 * Return: Pointer to memory block (dest)
 *
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
