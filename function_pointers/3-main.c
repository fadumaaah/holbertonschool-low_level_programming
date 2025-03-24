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

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*op_func)(int, int) = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		/* if the operator is not valud */
		printf("Error\n");
		exit(99);
	}

	if (argc != 4)
	{
		/* if the number of arguments is wrong*/
		printf("Error\n");
		exit(98);
	}


	printf("%d\n", op_func(a, b));
	return (0);


}
