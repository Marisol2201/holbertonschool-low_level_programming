#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 * @n: The character to print
 * The character to print
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n / 10 == 0 && n < 0)
		_putchar('-');

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	if (n < 0)
		_putchar((n % 10) * -1 + '0');
	else if (n != 0)
		_putchar(n % 10 + '0');
}
