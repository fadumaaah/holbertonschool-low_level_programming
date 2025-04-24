#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new lien
 *
 * @n: number of integers
 * @separator: string to be printed between numbers
 *
 * Return: Always 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
