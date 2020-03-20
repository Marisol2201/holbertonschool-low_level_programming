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
	list_t *temp = NULL;
	unsigned int counter;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	temp->len = counter;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
