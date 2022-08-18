#include "hash_tables.h"

/**
 * hash_table_get - Returns the value asscoiated with the key
 * @ht: pointer to the hash table
 * @key: pointer to key
 *Return: pointer to value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
