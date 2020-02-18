#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @str: The character to print
 *
 * Return: Always 0.
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
