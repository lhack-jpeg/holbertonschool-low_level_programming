#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: pointer to start of list
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *temp;

	curr = head;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}

	head = NULL;
}
