#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
int a, b, c, d, e, f;

for (a = 0; a < 24; a++)
{
c = a / 10;
d = a % 10;
for (b = 0; b < 60; b++)
{
k = b / 10;
l = b % 10;
_putchar('0' + c);
_putchar('0' + d);
_putchar(':');
_putchar('0' + e);
_putchar('0' + f);
_putchar('\n');
}
}
}
