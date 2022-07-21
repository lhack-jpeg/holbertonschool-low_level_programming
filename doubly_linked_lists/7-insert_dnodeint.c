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
 * insert_dnodeint_at_index - insert node at given index in double linked list
 * @h: pointer to pointer for start of double linked list
 * @idx: index on where to insert node
 * @n: int to stored in node
 * Return: pointer to node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, count = 0;
	dlistint_t *new, *nodebefore;

	len = dlistint_len(*h);

	if (len < idx)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = n;

	nodebefore = *h;

	if (idx == 0)
	{
		new->next = nodebefore;
		new->prev = NULL;
		if (nodebefore != NULL)
			nodebefore->prev = new;
		*h = new;
		return (new);
	}

	while (nodebefore != NULL)
	{
		if (count == idx - 1)
		{
			new->next = nodebefore->next;
			new->prev = nodebefore;
			nodebefore->next = new;
			if (new->next != NULL)
				new->next->prev = new;
		}
		count++;
		nodebefore = nodebefore->next;
	}
	return (new);
}
