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
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
