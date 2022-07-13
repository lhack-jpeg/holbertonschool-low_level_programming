#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: pointer to beginning of list
 * @n: int to be stored in struct
 *Return: pointer to node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *prev;

	prev = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next != NULL)
	{
		prev = prev->next;
	}
	prev->next = new;
	return (new);
}
