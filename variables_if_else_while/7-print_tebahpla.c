#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	char final_char = 'a';
	char ch = 'z';

	while (ch >= final_char)
	{
	putchar(ch);
	ch = ch - 1;
	}
	putchar('\n');
	return (0);
}
