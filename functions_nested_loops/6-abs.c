#include <unistd.h>
#include "main.h"

/**
* _abs - print absoulte value of a number
*
*@n: paramater to check
*
* Return: Absolute value of integer
*
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}

}
