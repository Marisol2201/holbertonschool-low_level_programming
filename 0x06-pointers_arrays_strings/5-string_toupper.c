#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @x: string to be changed
 *
 * Return: Updated string
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
