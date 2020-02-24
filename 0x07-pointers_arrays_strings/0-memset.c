#include "holberton.h"

/**
 * _memset - check the code for Holberton School students.
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
