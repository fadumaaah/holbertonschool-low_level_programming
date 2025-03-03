#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: String to search
 * @c: character to locate
 *
 * Return: return pointer to char c if found
 * return null if not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
