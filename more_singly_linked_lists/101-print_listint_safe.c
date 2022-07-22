#include "lists.h"

/**
 * print_listint_safe - prints a linked list and returns number
 * of nodes in list
 * @head: start of list
 *Return: count of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	if (head == NULL)
		exit(98);

	while (*head != NULL)
	{
		printf("[%p] %d\n", *head, (*head)->n);
		*head = (*head)->next;
		count++;
	}

	return (count);
}
