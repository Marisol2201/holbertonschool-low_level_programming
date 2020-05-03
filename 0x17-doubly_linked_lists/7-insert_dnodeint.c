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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new == NULL || *h == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (!*h)
		{
			new->prev = NULL, new->next = NULL; }
		else
		{
			new->prev = NULL;
			new->next = *h, (*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (current)
	{
		if (count + 1 == idx)
		{
			if (current->next == NULL)
			{
				new->next = NULL;
				new->prev = current, current->next = new;
			}
			else
			{
				new->next = current->next, new->prev = current;
				current->next = new, new->next->prev = new;
			}
			return (new);
		}
		current = current->next, count++;
	}
	free(new);
	return (NULL);
}
