#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - f that deletes the node at index, index of a list
 * @head: double pointer to head of linked list
 * @index: index of the list where the new node should be added
 *
 * Return: pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
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
