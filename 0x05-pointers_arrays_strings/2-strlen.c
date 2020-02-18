#include "holberton.h"

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 * Return: n
 * On error, -1 is returned, and error is set appropriately.
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	n++;
	return (n);
}
