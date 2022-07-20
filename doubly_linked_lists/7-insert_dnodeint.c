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
	dlistint_t *new, *nodebefore, *nodeafter;

	len = dlistint_len(*h);

	if (len < idx)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	nodebefore = *h;

	while (nodebefore != NULL)
	{
		if (count == idx - 1)
		{
			nodeafter = nodebefore->next;
			new->next = nodeafter;
			new->prev = nodebefore;
			nodeafter->prev = new;
			nodebefore->next = new;
		}
		count++;
		nodebefore = nodebefore->next;
	}
	return (new);
}
