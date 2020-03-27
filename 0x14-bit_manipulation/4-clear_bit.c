#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index  > sizeof(n) *  8)
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
