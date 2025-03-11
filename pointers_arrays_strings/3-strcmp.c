#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if both string are equal,
 *	positive value if s1 is greater
 *	negative value if s2 is greater
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]); /*Return diff in char*/
		i++;
	}

	return (s1[i] - s2[i]);
}
