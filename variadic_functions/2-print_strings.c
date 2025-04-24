#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 *
 * @n: number of strings
 * @separator: string to be printed between the strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
	}

	printf("\n");
	va_end(args);
}
