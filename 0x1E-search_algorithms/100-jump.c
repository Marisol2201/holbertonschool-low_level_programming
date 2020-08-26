#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * ...the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t block_size = sqrt(size);
	int start = 0;
	size_t end = block_size;

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%i] = [%i]\n", start, start);
		start = end; /*it is not correct block then shift block*/
		end += sqrt(size);
		if (end > size - 1)
			end = size; /*if right exceeds then bound the range*/
	}

	for (i = start; i < end; i++) /*linear search in selected block*/
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
