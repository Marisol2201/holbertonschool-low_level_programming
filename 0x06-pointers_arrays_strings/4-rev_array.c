#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: The character to print
 * @n: The character to print
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; j >= i; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0; i < n; i++)
		;
}
