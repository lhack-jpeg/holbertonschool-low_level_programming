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
 * insert_nodeint_at_index - insert node at index specified
 * @head: pointer to pointer for first value of list
 * @idx: index to insert new node
 * @n: int to be stored in new node
 *Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len, count = 0;
	listint_t *new, *temp, *prev = NULL;

	len = listint_len(*head);
	if (len < idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	temp = *head;

	while (temp != NULL)
	{
		if (count >= idx)
			break;
		prev = temp;
		count++;
	}

	if (prev != NULL)
		prev->next = new;
	else
		*head = new;
	return (new);
}
