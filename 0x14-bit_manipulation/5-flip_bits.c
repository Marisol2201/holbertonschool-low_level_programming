#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number;
	unsigned int count = 0;

	number = n ^ m;

	while (number > 0)
	{
		if (number & 1)
			count++;
		number >>= 1;
	}

	return (count);
}
