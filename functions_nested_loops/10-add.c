#include <unistd.h>
#include "main.h"

/**
* add - adds two integers and returns result
*
* @a: first integer
*
* @b: second integer
*
* Return: Value of integer
*
*/

int add(int a, int b)
{
	int c = a + b;
	 _putchar(c + '0');
	return (c);
}

