#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects correct function to perform
 *
 * @s: operator as a string
 *
 * Return: A pointer to the function that corresponds to the operator
 *		given as a parameter.Returns NULL if the operator is
 *		not one of the five valid operators ( +, -, *, /, % ).
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
