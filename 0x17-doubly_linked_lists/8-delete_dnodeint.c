#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to the head of a dlist
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next;
	unsigned int i;

	current = *head;
	for (i = 0; current != 0; i++)
	{
		if (index == 0)
		{
			next = *head;
			*head = next->next;
			free(next);
			return (1);
		}
		else if ((i + 1) == index)
		{
			next = current->next;
			current->next = next->next;
			free(next);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
