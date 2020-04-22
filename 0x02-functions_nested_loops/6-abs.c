#include "holberton.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to check
 *
 * Return: absolute value of integer (n)
 *
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
