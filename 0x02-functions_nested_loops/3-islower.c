#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to check
 *
 * Return: 1 if c is lowercase; 0 otherwise
 *
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
