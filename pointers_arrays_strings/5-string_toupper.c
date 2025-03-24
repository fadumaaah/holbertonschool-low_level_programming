#include <stdio.h>
#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 *
 * @str: string with letters to convert to upppercase
 *
 * Return: pointer to new string with uppercase letters
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
			/* 32 is the diff between lowercase and uppercase letters*/
	}

	return (str);

}
