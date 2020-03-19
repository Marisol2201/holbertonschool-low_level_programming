#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 * Return: n
 * On error, -1 is returned, and error is set appropriately.
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

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
	for (counter = 0; str[counter] != '\0'; counter++)
	temp->len = counter;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
