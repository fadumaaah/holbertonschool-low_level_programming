#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches string for any set of bytes
 *
 * @s: String to check
 * @accept:  A string containing a set of characters (or "bytes")
 *
 * Return: A pointer to the byte in s that matches one of the bytes
 *		found in accept otherwise return null if none found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
