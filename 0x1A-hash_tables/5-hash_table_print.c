#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, node = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			if (node == 0)
				node = 1;
			else
				printf(", ");

			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
		index++;
	}
	printf("}\n");
}
