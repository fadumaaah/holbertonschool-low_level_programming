#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: a new string with
 *		a and A replaced by 4
 *		e and E replaced by 3
 *		o and O replaced by 0
 *		t and T replaced by 7
 *		l and L replaced by 1
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char new_letters[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
				str[i] = new_letters[j];
		}
	}

	return (str);

}
