#include "lists.h"

/**
 * dlistint_len - function that counts all the nodes of a dlistint_t list
 * @h: const pointer to start of double linked list
 *Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * delete_dnodeint_at_index - delete node at given index in double linked list
 * @head: pointer to pointer for start of double linked list
 * @index: index on where to insert node
 * Return: 1 if successfuly, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len, count = 0;
	dlistint_t *node;

	node = *head;
	if (node == NULL)
		return (-1);

	len = dlistint_len(*head);
	if (len < index)
		return (-1);

	if (index == 0)
	{
		if (node->next == NULL)
		{
			*head = NULL;
			free(node);
			return (1);
		}
		*head = node->next;
		node->next->prev = NULL;
		free(node);
		return (1);
	}

	while (node != NULL)
	{
		if (count == index)
		{
			if (node->next != NULL)
				node->next->prev = node->prev;
			if (node->prev != NULL)
				node->prev->next = node->next;
			free(node);
			return (1);
		}
		count++;
		node = node->next;
	}
	return (-1);
}
