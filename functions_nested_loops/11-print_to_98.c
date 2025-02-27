#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n : paramater to check
 *
 */


void print_to_98(int n)
{
	while (n > 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
			n = n - 1;
		}
	}
	while (n <=  98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
