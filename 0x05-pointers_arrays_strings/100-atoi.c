#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string to be converted to an integer
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i, sign, num, d;

	for (d = 0; s[d] != '\0'; d++)
		;
	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = ((s[i] - '0') * sign) + num * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}
