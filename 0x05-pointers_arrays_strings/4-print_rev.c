#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: string to print
 *
 * Return: void
 */

void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
