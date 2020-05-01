#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of a dlist
 * @n: value for the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (current && current->next)
		current = current->next;

	new->n = n;
	new->prev = current;
	new->next = NULL;
	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}
