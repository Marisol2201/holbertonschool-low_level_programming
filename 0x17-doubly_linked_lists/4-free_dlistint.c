#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to the head of a dlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{       aux = head->next;
		free(head);
		head = aux;
	}
}
