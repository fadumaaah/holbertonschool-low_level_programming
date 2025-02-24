#include <stdio.h>

/**
 * main - print lowercase alphabet followed by new line excluding q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char final_char = 'z';
	char ch = 'a';

	while (ch <= final_char)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
