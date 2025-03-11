#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @dest: the destination to copy string
 * @src: source string to copy from
 * @n: number of characters to copy from src
 *
 * Return: pointer to the resulting string dest
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

