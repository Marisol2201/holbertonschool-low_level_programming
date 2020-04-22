#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to find length of
 * Return: length of a string (s)
 *
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	n++;
	return (n);
}
