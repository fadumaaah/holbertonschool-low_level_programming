#include <unistd.h>
#include "main.h"

/**
* print_sign - prints the sign of a number (negative / positive or 0)
*
* @n: paramater to check
*
* Return: Always 1 if positive, 0 if 0, -1 if negative
*
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
