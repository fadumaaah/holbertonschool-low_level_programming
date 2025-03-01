#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s : pointer to string to be calculated
 *
 * Return: Length of string
 *
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
