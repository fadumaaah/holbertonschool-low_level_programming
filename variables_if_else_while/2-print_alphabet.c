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
	for (char ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
