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
