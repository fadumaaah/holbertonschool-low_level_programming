#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of the operation, followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		/* if the operator is not valud */
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", op_func(a, b));
	return (0);


}
