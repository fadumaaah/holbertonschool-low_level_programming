#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes first letter of a string dictataed by seperators
 *
 * @str: pointer to string to be modified
 *
 * Return: New string with capital letters
 */

char *cap_string(char *str)
{
	char seperators[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i, j;



	/*if lowercase letter, capitalize fist letter*/
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; seperators[j] != '\0'; j++)
		{
			if (str[i - 1] == seperators[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			break;
			}
		}
	}

	return (str);
}
