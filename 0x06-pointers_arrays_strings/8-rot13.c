#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char *l = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *e = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = e[j];
				break;
			}
		}
	return (s);
}
