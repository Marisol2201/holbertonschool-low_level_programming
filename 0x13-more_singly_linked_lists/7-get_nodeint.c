#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to head of linked list
 * @index: index of the node
 * Return: pointer to nth node in linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
