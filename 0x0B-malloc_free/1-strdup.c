#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: returns a pointer to the duplicated string.
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *a;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	a = (char *) malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
