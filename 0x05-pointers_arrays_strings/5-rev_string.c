#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: The character to print
 *
 * Return: Always 0.
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
