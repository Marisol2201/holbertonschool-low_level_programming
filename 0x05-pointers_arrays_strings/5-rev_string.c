#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
		;
	c = a;
	a--;
	for (b = 0; b < c / 2; b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
		a--;
	}
}
