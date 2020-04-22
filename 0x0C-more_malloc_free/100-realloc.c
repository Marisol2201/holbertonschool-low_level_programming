#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 * @ptr: pointer to previously allocated memory
 * Return: pointer to newly allocated memory, or NULL if failure
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
