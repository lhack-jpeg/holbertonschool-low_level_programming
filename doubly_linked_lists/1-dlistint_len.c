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
