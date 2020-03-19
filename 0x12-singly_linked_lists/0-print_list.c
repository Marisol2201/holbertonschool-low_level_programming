#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print a list.
 * @h: pointer of type list_t
 * The character to print
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *aux;

	aux = h;
	while (aux != NULL)
	{
		if(aux->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", aux->len, aux->str);
		}
	        aux = aux->next;
		i++;
	}
	return (i);
}
