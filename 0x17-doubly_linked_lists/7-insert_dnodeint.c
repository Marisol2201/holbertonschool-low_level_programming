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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	current = *h;
	new->n = n;

	if (idx == 0)
	{
		*h = new;
		new->next = current;
		new->prev = NULL;
		current->prev = new;
		return (new);
	}

	while (current)
	{
		if (count == (idx - 1)) /*valor anterior a la posición*/
		{
			new->next  = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	if (count == idx - 1)
	{
		new->prev = current;
		new->next = NULL;
		current->next = new;
	}
	return (NULL);
}
