#include "holberton.h"
#include <stdio.h>

/**
 * _abs - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n = n * -1;
return (n);
}
}
