#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * linear_search - searches for a value in a sorted array of integers using
 * ...the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);


/* int jump_search(int *array, size_t size, int value);*/
/* int interpolation_search(int *array, size_t size, int value);*/
/* int exponential_search(int *array, size_t size, int value);*/
/* int advanced_binary(int *array, size_t size, int value);*/
/* listint_t *jump_list(listint_t *list, size_t size, int value);*/
/* skiplist_t *linear_skip(skiplist_t *list, int value);*/

#endif /* SEARCH_ALGOS_H */
