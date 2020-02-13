#include <stdio.h>

/**
 * _isdigit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _isdigit(int c)
{
	char p;

	for (p = '0'; p < '9'; p++)
	{
		if (c == p)
		{
			return (1);
		}
	}
	return (0);
}
