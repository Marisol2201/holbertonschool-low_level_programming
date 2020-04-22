#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number.
 *@n: digit who's last digit will be evaluated
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int m, p;

	m = n % 10;

	if (m <  0)
	{
		m = -m;
	}
	p = '0' + m;
	_putchar(p);
	return (m);
}
