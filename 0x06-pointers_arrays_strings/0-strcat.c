#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @src: The character to print
 * @dest: The character to print
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++, a++)

		dest[a] = src[b];
	dest[a] = '\0';

	return (dest);
}
