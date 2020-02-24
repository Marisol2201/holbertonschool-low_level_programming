#include "holberton.h"

/**
 * _memcpy - check the code for Holberton School students.
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
