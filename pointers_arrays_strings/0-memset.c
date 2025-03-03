#include "main.h"
#include <stdio.h>

/**
 *_memset - Fills memory with a constant byte
 *
 * @s: pointer to memory block
 * @b: byte used to fill memory
 * @n: number of bytes
 *
 * Return: Pointer to memory block (s)
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
