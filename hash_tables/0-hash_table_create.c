#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table of size @size
 * @size: size of hash table
 * Return: pointer to new hash table, NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t = *new;

	new = malloc(sizeof(hash_node_t) * size);
	if (new == NULL)
		return (NULL);
	new->size = size;
	return (new);
}
