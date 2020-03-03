#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - check the code for Holberton School students.
 * @size: The character to print
 * @c: The character to print
 * Return: Always a.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
