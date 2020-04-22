#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - f that returns the number of elements in a linked list_t list
 * @h: pointer to the start of the linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *aux;

	aux = h;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
