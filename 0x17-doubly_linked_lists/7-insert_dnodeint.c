#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of a dlist
 * @idx: position
 * @n: int(data)
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	current = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (current && current->next)
	{
		current = current->next;
		if (count == idx)
			current = current->next;
		count++;
	}

	new->n = n;
	new->prev = current;
	new->next = current->next;
	if (current)
		current->next = new;
	else
		*h = new;
	return (new);
}
