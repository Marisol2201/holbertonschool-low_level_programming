#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to check
 *
 * Return: 1 if c is a digit 0 otherwise
 *
 */
int _isdigit(int c)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
		if (c == p)
		{
			return (1);
		}
	}
	return (0);
}
