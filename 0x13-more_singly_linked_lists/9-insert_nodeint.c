#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - f that inserts a new node at a given position.
 * @head: double pointer to head of linked list
 * @idx: index of the list where the new node should be added (position)
 * @n: data in the node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	while (i < idx)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
