#include <stdio.h>

/**
 * main - 0-10 using putchar followed by ,
 *
 * Return: Always 0
 */

int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
	putchar(ch);
	if (ch < 57)
	{
	putchar(',');
	putchar(' ');
	}
	ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
