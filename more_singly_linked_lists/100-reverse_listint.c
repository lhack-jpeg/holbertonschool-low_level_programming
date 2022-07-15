#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to start of list
 *Return: pointer to new start of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev = *head;
	temp = prev->next;
	*head = temp->next;
	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		temp->next = prev;
		prev = temp;
		temp = *head;
		*head = (*head)->next;
	}

	(*head)->next = temp;
	temp->next = prev;
	return (*head);
}
