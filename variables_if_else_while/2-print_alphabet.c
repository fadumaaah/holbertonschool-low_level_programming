#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print lowercase alphabet followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	char final_char = 'z';
	char ch = 'a';

	while (ch <= final_char)
	{
	putchar(ch);
	ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
