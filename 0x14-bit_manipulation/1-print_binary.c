#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if ((n & i) == 1)
		_putchar('1');
	if ((n & i) == 0)
		_putchar('0');
}
