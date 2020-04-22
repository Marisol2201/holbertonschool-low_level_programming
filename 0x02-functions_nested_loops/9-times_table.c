#include "holberton.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int n, o, p, q, r;

	for (n = 0; n < 10; n++)
	{
		for (o = 0; o < 10; o++)
		{
			p = n * o;
			q = p / 10;
			r = p % 10;
			if (o == 0)
				_putchar('0');
			else if (p < 10)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar('0' + q);
				_putchar('0' + r);
			}
			if (o < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
