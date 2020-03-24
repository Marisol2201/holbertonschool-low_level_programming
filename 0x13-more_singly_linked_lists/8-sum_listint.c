#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - f that returns the sum of all the data (n) of a listint_t
 * @head: pointer to head of linked list
 *
 * Return: sum of all data (n) of elements in linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
