#include <stdio.h>

/**
 * main - print lowercase alphabet followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	char final_char_lower = 'z';
	char final_char_upper = 'Z';
	char ch = 'a';

	while (ch <= final_char_lower)
	{
	putchar(ch);
	ch = ch + 1;
	}

	ch = 'A';
	while (ch <= final_char_upper)
	{
	putchar(ch);
	ch = ch + 1;
	}

	putchar('\n');
	return (0);
}
