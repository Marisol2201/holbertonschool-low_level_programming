#include "holberton.h"

/**
 * is_prime - check the code for Holberton School students.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int is_prime(int a, int b)
{
	if (a < 2)
		return (0);
	if (b * b > a)
		return (1);
	return (a % b == 0 ? 0 : (is_prime(a, b + 1)));
}

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: The character to print
 * The character to print
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
