#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @src: string to append to dest
 * @dest: string to append by src
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++, a++)

		dest[a] = src[b];
	dest[a] = '\0';

	return (dest);
}
