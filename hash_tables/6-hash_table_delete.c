#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	USLI size;
	size_t i;

	if (ht == NULL)
		return;
	i = 0;
	size = ht->size;
	while (i < size)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			free(temp->key);
			free(temp->value);
			node = node->next;
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
