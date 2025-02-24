#include <stdio.h>

/**
 * main - print lowercase alphabet followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	char final_char_upper = 'f';
	int ch = 48;

	while (ch < 58)
	{
	putchar(ch);
	ch = ch + 1;
	}

	ch = 'a';
	while (ch <= final_char_upper)
	{
	putchar(ch);
	ch = ch + 1;
	}

	putchar('\n');
	return (0);
}
