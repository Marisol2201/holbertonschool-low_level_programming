#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: The character to print
 * The character to print
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
