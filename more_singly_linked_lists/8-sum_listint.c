#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums the elements of a linked list listint_t
 * @head: pointer to struct list item
 *Return: size_t of number of elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
