#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht:the hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *head;

	if (ht == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[i] == NULL)
	{
		ht->array[i] = node;
	}
	else
	{
		head = ht->array[i];
		if (strcmp(key, head->key) == 0)
		{
			head->value = strdup(value);
		}
		else
		{
			node->next = head;
			ht->array[i] = node;
		}
	}
	return (1);
}
