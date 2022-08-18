#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hast tables
 * @ht: pointer to the hash table
 * @key: key is the key to be stored
 * @value: value associated with the key
 *Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(*node));
	if (node  == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
