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
	int count, num;
	unsigned int result = 0;

	if (n == 0)
		_putchar('0');

	result = n;
	for (count = 0; result; count++)
		result >>= 1; /*equivalent to: result = result / 2*/
	for (count--; count >= 0; count--)
	{
		num = n >> count; /*equivalent to: n / (2 ^ count)*/
		if (num & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
