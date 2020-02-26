#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: The character to print
 * @needle: The character to print
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
	for (i = 0; needle[i]; i++)
			if (needle[i] != haystack[i])
				break;
	if (needle[i + 1] == '\0')
		return (haystack);
	}
	return (haystack);
}
