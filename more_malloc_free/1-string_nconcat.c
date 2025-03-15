#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates strings s1 + s2
 *
 * @s1: First string to concatentate
 * @s2: Second string to concatenate
 * @n: number of bytes to use from s2
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	if (length2 > n)
		length2 = n;

	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	for (j = 0; j < length2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);

}
