#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * ...the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t min = 0;
	size_t max = size - 1;
	size_t mid = 0;

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (min + max) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		if (array[mid] > value)
			max = mid - 1;
	}
	return (-1);
}
