#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: The character to print
 * The character to print
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
