#include "lists.h"
/**
 * add_dnodeint - function to add node at beginning of double
 * @head: pointer to pointer of start of list
 * @n: int to add to element
 *Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	/* assign data to new node */
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	/* check to see if head if not NULL to assign correctly */
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
