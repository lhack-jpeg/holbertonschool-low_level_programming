#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Free a linked list
 * @head: pointer to start of list
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
