#include "holberton.h"

/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 * Return
 * On error, -1 is returned, and error is set appropriately.
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
