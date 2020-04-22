#include "holberton.h"

/**
 * is_prime - returns 1 if the input integer is a prime number
 * @a: factor check
 * @b: possible prime number
 * Return: 1 if prime, 0 if not
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
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
