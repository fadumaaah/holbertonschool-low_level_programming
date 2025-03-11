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
	int i;
	size_t length = 0;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		length++;	
	}

	length = length + 1;

	s  = malloc(length * sizeof(char));

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	if (s == NULL)
		return (NULL);


	return (s);

}
