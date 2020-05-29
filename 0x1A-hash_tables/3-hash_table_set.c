#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	new_node->key = strdup(key);

	new_node->value = strdup(value);

	new_node = ht->array[index];

	return (1);
}