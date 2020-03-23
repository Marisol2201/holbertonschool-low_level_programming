#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"






/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to head node of type listint_t
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
