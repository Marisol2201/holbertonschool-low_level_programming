#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - returns number of bits to flip to go from one number to other
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
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
