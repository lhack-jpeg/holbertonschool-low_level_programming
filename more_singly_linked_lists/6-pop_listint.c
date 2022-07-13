#include "lists.h"

/**
 * pop_listint - delete head list item, and return the node's data
 * @head: pointer to the head pointer
 *Return:int, 0 if list doesn't exist
 */

int pop_listint(listint_t **head)
{
	listint_t *item;
	int num;

	item = *head;
	if (item == NULL)
		return (0);
	num = item->n;
	*head = item->next;
	free(item);
	return (num);
}
