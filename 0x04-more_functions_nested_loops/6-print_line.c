#include "holberton.h"

/**
 * print_line - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
void print_line(int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
_putchar('\n');
}
