#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: String to check
 * @needle:  Substring that we are looking for within haystack
 *
 * Return: pointer to the beginning of the located substring
 *		or NULL if string is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack; /*Reset to starting position*/
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL); /* No match found*/
}
