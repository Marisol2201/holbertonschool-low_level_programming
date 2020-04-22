#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 99)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		if (c < 99)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
