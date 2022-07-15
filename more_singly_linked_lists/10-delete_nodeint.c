#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts number of items in linked list listint_t
 * @h: pointer to struct list item
 *Return: size_t of number of elements
 */

size_t listint_len(const listint_t *h)
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
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to start of list
 * @index: index of element to delete index 0
 * Return: 1 if successful -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int count = 0, len;

	curr = *head;
	if (curr == NULL)
		return (-1);

	len = listint_len(curr);
	if (len < index)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		if (count == index - 1)
		{
			temp = curr->next;
			curr->next = temp->next;
			free(temp);
		}
		count++;
		curr = curr->next;
	}
	return (1);
}
