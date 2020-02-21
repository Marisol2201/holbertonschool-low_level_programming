#include "holberton.h"

/**
 * leet - check the code for Holberton School students.
 * @s: The character to print
 * The character to print
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i, j;

	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}

	return (s);
}
