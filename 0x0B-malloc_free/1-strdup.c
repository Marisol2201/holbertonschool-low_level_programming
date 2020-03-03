#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: The character to print
 * The character to print
 * Return: Always a.
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
