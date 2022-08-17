#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table of size @size
 * @size: size of hash table
 * Return: pointer to new hash table, NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	size_t i;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t*));
	if (new->array == NULL)
		return (NULL);

	i = 0;
	while (i < new->size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
