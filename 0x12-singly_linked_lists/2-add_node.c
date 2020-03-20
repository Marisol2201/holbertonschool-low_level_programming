#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - f that adds a new node at the beginning of a list_t list
 * @str: pointer to string input
 * @head: pointer to pointer of list_t struct type
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = (list_t  *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (new);
}
