#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to the head of a dlist
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}

	while (aux && count <= index)
	{
		count++;
		aux = aux->next;
	}
	if (count < index)
	{
		return (-1);
	}
	else
	{
		if (!aux->next)
		{
			aux->prev->next = NULL;
			free(aux);
			return (1);
		}
		aux->next->prev = aux->prev;
		aux->prev->next = aux->next;
		free(aux);
	}
	return (1);
}
