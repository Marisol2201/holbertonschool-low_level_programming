#include "holberton.h"

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _islower(int c)
{

char m;
int s = 0;

for (m = 'a'; m <= 'z'; m++)
{
if (c == m)
{
s = 1;
}
}
return (s);
}
