#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 * @head: start of list
 * @n: integer to be stored in node
 * Return: return address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *curr;

	curr = *head;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (curr == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = node;

	return (node);
}
