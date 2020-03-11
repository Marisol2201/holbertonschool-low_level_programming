#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code for Holberton School students.
 * @array: The character to print
 * @size: The character to print
 * @action: The character to print
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array[size])
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
