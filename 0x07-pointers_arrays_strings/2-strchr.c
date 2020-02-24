#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: The character to print
 * @c: The character to print
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
