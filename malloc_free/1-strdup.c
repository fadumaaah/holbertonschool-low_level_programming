#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 *_strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: string to copy
 *
 * Return: copied string, null if insufficent memory
 */

char *_strdup(char *str)
{
	char *s;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;

	s  = malloc(length * sizeof(char));

	if (s == NULL)
		return (NULL);

	strcpy (s, str);

	return s;

}
