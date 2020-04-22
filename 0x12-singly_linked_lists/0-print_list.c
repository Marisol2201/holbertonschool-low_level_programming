#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print a list.
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *aux;

	aux = h;
	while (aux != NULL)
	{
		if (aux->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", aux->len, aux->str);
		aux = aux->next;
		i++;
	}
	return (i);
}
