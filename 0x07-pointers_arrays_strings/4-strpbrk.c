#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: The character to print
 * @accept: The character to print
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
