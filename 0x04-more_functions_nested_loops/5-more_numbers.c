#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int e, i, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (e = 0; e <= 14; e++)
		{
			a = e / 10;
			b = e % 10;
			if (e > 9)
				_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
