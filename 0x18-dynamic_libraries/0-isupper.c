#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: int type number
 *
 * Return: 1 if uppercase, else 0
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
