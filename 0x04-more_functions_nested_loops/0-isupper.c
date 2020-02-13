#include <stdio.h>

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _isupper(int c)
{

char p;

for (p = 'A'; p <= 'Z'; p++)
{
if (c == p)
{
return (1);
}
else
{
}
}
return (0);
}
