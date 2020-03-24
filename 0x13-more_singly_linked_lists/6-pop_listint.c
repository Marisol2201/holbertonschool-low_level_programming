#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (*head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
