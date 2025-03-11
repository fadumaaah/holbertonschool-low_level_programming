#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: the destination to where src will be concatenated
 * @src: source string to concatenate from
 * @n: number of characters to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
