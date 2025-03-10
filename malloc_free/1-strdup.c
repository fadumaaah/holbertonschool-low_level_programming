#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int length;
	int newstr;

	if (*str == NULL)
		return (NULL);

	s  =(length*)malloc(char * sizeof(char);

	if (s == NULL)
		return (NULL);

	length = strlen(str) + 1;
	strcpy (s, str);

	return s;

}
