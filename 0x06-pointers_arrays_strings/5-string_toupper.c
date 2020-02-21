#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @x: The character to print
 * The character to print
 * Return: Always 0.
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
		++i;
	}
	return (x);
}
