#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free a linked list and set head to NULL
 * @head: pointer to start of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *item;

	if (head == NULL)
		return;
	item = *head;

	while (item != NULL)
	{
		temp = item;
		item = item->next;
		free(temp);
	}
	*head = NULL;
	free(item);
}
