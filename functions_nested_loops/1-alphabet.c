#include <unistd.h>
#include "main.h"

/**
 * print_alphabet -  Prints lowercase alphabet followed by new line
 *
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c = c + 1;
	}
	_putchar('\n');
}


