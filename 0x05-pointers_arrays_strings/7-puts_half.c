#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{

	}
	a++;
	for (a = a / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
