#include "holberton.h"

/**
 * _strpn - check the code for Holberton School students.
 * @s: The character to print
 * @aceept: The character to print
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == s[x])
				break;
		}
		if (!accept[y])
			break;
	}
	return (x);
}
