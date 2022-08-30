#include "search_algos.h"

/**
 * val_check - function for printing out statement
 * @index: index of list
 * @value: value found at index
 * Return: void
 */

void val_check(size_t index, int value)
{
	printf("Value checked at index [%ld] = [%d]\n",
		       index, value);
}

/**
 * val_found - function for printing out statement
 * @index_1: start of partition of list
 * @index_2: end of partition of list
 * Return: void
 */

void val_found(size_t index_1, size_t index_2)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
		       index_1, index_2);
}

/**
 * linear_skip - function that searches through a sorted skip list
 * @list: pointer to start of list
 * @value: value to search for
 * Return: node with value or NULL otherwise
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *temp;

	if (list == NULL)
		return (NULL);
	node = list->express;
	temp = list;
	while (node->express != NULL)
	{
		val_check(node->index, node->n);
		if (node->n >= value)
			break;
		temp = node;
		node = node->express;
	}
	if (node->n >= value)
	{
		val_found(temp->index, node->index);
		while (temp != node)
		{
			val_check(temp->index, temp->n);
			if (temp->n == value)
				return (temp);
			temp = temp->next;
		}
	}
	temp = node;
	while (node->next != NULL)
		node = node->next;
	val_check(temp->index, temp->n);
	val_found(temp->index, node->index);
	while (temp != NULL)
	{
		val_check(temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
