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
	int counter = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (head == NULL)
		*head = temp;
	while (str[counter] != '\0')
	{
		counter++;
	}
	temp->str = strdup(str);
	temp->len = counter;
	temp->next = *head;
	*head = temp;
	return (*head);
}
