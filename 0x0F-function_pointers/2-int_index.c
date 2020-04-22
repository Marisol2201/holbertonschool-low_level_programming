#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array to serch through
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
