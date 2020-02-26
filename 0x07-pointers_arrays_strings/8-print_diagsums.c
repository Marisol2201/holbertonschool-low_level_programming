#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

		for (i = 0; i < size; i++)
		{
			for (j =0; j < size; j++)
			{
				if (i == j)
				{
				        sum  += a[i][j];
					printf("%d", sum);
				}
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
}
