#include "search_algos.h"

/**
 * get_nodeint_at_index - Returns the node at the index specified
 * @head: pointer to the start of the list
 * @index: index to get the node
 * Return: returns the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *node;

	if (index == 0)
		return (head);
	node = head;

	while (count < index)
	{
		node = node->next;
		count++;
	}
	return (node);
}

/**
 * print_func - function to print out statement
 * @x: first value
 * @y: second value
 * Return: void
 */

void print_func(size_t x, size_t y)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
	       x, y);
}

/**
 * print_func_2 - second print function
 * @x: first value
 * @y: second value
 * Return: void
 */

void print_func_2(size_t x, int y)
{
	printf("Value checked at index [%ld] = [%d]\n",
				       x, y);
}

/**
 * jump_list - search through sorted list using jump algorith
 * @list: ponter to head of list
 * @size: number of nodes in list
 * @value: value to searched for in list
 * Return: node containing the value
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, idx = 0, j;
	listint_t *node;

	if (list == NULL)
		return (NULL);
	node = list;
	step = sqrt(size);
	idx = idx + step;
	while (idx < size)
	{
		node = get_nodeint_at_index(list, idx);
		print_func_2(idx, node->n);
		if (node->n >= value)
		{
			node = get_nodeint_at_index(list, idx - step);
			print_func(idx - step, idx);
			for (j = idx - step; j <= idx || j < size; j++)
			{
				print_func_2(j, node->n);
				if (node->n == value)
					return (node);
				node = node->next;
			}
		}
		if (idx + step >= size)
		{
			node = get_nodeint_at_index(list, idx);
			print_func(idx, size - 1);
			for (j = idx; j < size; j++)
			{
				print_func_2(j, node->n);
				if (node->n == value)
					return (node);
				node = node->next;
			}
			return (NULL);
		}
		idx += step;
	}
	return  (NULL);
}
