#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints the elements of a struct list
 * @h: pointer to struct list item
 *Return: size_t of number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
