#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at the index specified
 * @head: pointer to the start of the list
 * @index: index to get the node
 * Return: returns the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int count = 0;

	if (index == 0)
		return (head);

	while (count < index)
	{
		head = head->next;
		count++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
