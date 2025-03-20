#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
