#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
	}
	printf("}\n");
}
