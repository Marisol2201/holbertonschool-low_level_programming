#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
