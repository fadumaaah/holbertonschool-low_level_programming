#include "main.h"
#include <stdio.h>

/**
 * rev_string - Prints a string in reverse followed by new line
 *
 * @s : String to print
 *
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		s[i] = s[i] + s[length - i - 1]; /* Add first and last value to gether */
		s[length - i - 1] = s[i] - s[length - i - 1];
		/* minuses value to get original value */
		s[i] = s[i] - s[length - i - 1]; /* swaps values */
	}

}
