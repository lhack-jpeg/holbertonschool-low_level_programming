#include "lists.h"
/**
 * add_dnodeint_end - function to add node at end of double
 * @head: pointer to pointer of start of list
 * @n: int to add to element
 *Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	curr = *head;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	/* assign data to new node */
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new;
	new->prev = curr;

	return (new);
}
