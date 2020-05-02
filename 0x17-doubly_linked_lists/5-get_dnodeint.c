#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of a dlist
 * @index: position
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
                current = current->next;        
                        count++;        
	}
	return (current);
}
