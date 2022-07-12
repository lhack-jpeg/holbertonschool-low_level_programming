#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the elements of a struct list
 * @h: pointer to struct list item
 *Return: size_t of number of elements
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return (count);
}
