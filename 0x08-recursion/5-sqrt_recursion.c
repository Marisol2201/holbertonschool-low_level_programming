#include "holberton.h"

/**
 * _natural_square - check the code for Holberton School students.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
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
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: The character to print
 * The character to print
 * Return: Always 0.
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
