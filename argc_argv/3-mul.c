#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
