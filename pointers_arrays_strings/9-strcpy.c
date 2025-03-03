#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string pointed by src including null to destination
 *
 * @dest: pointer to destination array
 *
 * @src: pointer to src array to be copied
 *
 * Return: Pointer to destination string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
