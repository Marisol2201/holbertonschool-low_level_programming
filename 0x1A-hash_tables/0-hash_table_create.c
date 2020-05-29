#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_new;

	if (!size)
		return (0);

	hash_new = malloc(sizeof(hash_table_t));

	if (hash_new == NULL)
		return (NULL);

	hash_new->size = size;
	hash_new->array = malloc(sizeof(hash_node_t *) * size);
	return (hash_new);
}
