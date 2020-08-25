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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	current = *h;
	new->n = n;
	if (idx == 0) /*add node at the beginning of the list*/
	{
		*h = new;
		new->next = current;
		new->prev = NULL;
		current->prev = new;
		return (new);
	}
	while (current && current->next) /*node at the middle*/
	{
		if (count == idx)
		{
			new->prev = current;
			new->next = current->next;
			current->next = new;
			new->next->prev = new;
		}
		current = current->next;
		count++;
	}
	if (count == idx) /*node at the end*/
	{
		new->prev = current;
		new->next = NULL;
		current->next = new;
	}
	return (NULL);
}