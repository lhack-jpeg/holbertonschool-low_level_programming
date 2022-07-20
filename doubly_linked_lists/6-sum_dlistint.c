#include "lists.h"

/**
 * sum_dlistint - sums the elements of a double linked list
 * @head: pointer to struct list item
 *Return: int sum elements -> n
 */

int sum_dlistint(dlistint_t *head)
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
