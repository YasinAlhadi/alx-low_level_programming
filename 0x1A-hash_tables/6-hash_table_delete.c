#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			next = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = next;
		}
	}
	free(ht->array);
	free(ht);
}
