#include "main.h"
#include <stdio.h>

/**
 * _strspn - Calculate length of prefix substring
 *
 * @s: String to check
 * @accept: String containing characters to check
 *
 * Return: Quantity of characters that match string accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				length++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}

	return (length);
}
