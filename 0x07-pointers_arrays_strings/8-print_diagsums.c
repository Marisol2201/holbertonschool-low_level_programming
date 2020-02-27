#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: The character to print
 * @size: The character to print
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x, y, suma, sumb;

	suma = 0;
	sumb = 0;

	for (x = 0;  x < size; x++)
		suma += a[(size + 1) * x];
	for (y =  0; y < size; y++)
		sumb += a[(size - 1) * (y + 1)];
	printf("%d, %d\n",  suma, sumb);
}
