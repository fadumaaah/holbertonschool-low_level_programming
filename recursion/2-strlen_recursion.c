#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to measure
 *
 * Return: Length of string
 */


int _strlen_recursion(char *s)
{
	int length  = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}

	return (length);

}
