#include "lists.h"

/**
 * reverse_list - reverse a linked list
 * @curr: pointer to current node of list
 * @prev: previous node
 * @head: pointer to start of list
 *Return: pointer to new start of list
 */

listint_t *reverse_list(listint_t *curr, listint_t *prev, listint_t **head)
{
	listint_t *next;

	if (!curr->next)
	{
		*head = curr;
		curr->next = prev;
		return (*head);
	}

	next = curr->next;
	curr->next = prev;
	reverse_list(next, curr, head);
	return (*head);
}

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to start of list
 *Return: pointer to new start of list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_list(*head, NULL, head);
	return (*head);
}
