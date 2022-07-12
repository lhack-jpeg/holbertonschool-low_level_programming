#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - returns the length of a string
 *@s: pointer to the string
 *Return: returns the string length
 */

int _strlen(const char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * add_node - add a new node at the being of a list_t list
 * @head: pointer to beginning of list
 * @str: pointer to string to be duplicated over
 *Return: pointer to node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *prev;

	prev = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = prev;
	*head = new;

	return (new);
}
