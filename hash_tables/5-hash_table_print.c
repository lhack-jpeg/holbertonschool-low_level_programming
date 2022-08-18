#include "hash_tables.h"

/**
 * hash_table_print - print outs the hash table.
 * prints of the order as they appear in the hash table.
 * Order, array, list
 * @ht: pointer to hash table
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	USLI size;
	size_t i, flag = 0;
	hash_node_t *node;
	char *key, *value;

	if (ht == NULL)
		return;

	size = ht->size;
	putchar('{');
	i = 0;
	while (i < size)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			key = node->key;
			value = node->value;
			if (flag != 0)
			{
				printf(", ");
			}
			printf("\'%s\': \'%s\'", key, value);
			flag++;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
