#include "holberton.h"

/**
 * _natural_square - returns the natural square root of a number.
 * @a: guess at sqrt
 * @b: number to find sqrt of
 * Return: 1 or sqrt of c
 */

int _natural_square(int a, int b)
{
	if (a == (b * b))
		return (b);
	if (b  * b  >  a)
		return (-1);
	return (_natural_square(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (-1);
	return (_natural_square(n, 1));
}
