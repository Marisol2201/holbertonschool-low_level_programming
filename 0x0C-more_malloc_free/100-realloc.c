#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - check the code for Holberton School students.
 * @old_size: The character to print
 * @new_size: The character to print
 * @ptr: The character to print
 * Return: Always 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
