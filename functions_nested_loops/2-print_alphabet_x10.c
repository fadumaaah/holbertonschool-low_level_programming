#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 -  Prints lowercase alphabet x10 followed by new line
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c = c + 1;
	}
	_putchar('\n');
	i = i + 1;
	}
}


