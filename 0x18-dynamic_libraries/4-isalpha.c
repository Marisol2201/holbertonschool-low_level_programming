#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to check
 *
 * Return: on success 1.
 *
 */
int _isalpha(int c)
{

	char m;
	char p;
	int s = 0;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (c == m)
		{
			s = 1;
		}
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		if (c == p)
		{
			s = 1;
		}
	}
	return (s);
}
