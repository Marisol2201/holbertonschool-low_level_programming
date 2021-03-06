#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to check bits
 * @index: position
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check_idx =  1;

	if (index > sizeof(n) * 8)
		return (-1);

	check_idx <<= index;
	if (check_idx &  n)
		return (1);
	else
		return (0);
}
