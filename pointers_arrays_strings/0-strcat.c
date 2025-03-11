#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 *
 * @src: original string
 *
 * @dest: string to cocatenate end of src
 *
 * Return: Pointer to resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
