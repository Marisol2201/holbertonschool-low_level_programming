#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - check the code for Holberton School students.
 * @min: The character to print
 * @max: The character to print
 * The character to print
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	p= malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (min <= max)
	{
		p[a] = min;
		min++;
		a++;
	}
	return (p);
}
