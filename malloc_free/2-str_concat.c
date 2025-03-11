#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat -  Functation that concatentates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to concatentated string
 *		(s1 followed by s2), or NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;


	if (s1 != NULL)
	{
		while (s1[length1] != '\0')
			length1++;
	}

	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
			length2++;
	}

	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	for (j = 0; j < length2; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);

}
