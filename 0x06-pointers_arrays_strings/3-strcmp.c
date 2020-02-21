#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (a = 0; s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
