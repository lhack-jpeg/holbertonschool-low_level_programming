#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the elements of a struct list
 * @h: pointer to struct list item
 *Return: size_t of number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
