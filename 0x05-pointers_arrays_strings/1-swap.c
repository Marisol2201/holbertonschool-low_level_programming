#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to int to be swapped
 * @b: pointer to other int to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
