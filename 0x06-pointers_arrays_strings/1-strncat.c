#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++, a++)

		dest[a] = src[b];

	dest[a] = '\0';
	return (dest);
}
