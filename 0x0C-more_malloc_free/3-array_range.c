#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
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
