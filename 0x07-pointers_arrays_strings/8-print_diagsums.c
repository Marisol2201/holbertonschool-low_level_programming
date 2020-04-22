#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * of integers
 * @a: square matrix of integers
 * @size: size of one side of the square matrix
 * Return: void
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
