#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be processed
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char m[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (m[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
