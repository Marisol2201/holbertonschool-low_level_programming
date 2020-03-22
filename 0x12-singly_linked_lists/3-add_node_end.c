#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: dasfasfs
 * @str: asdasdasd
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *first;
	unsigned int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	first->len = counter;
	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = first;
	first->next = NULL;

	return (*head);
}
