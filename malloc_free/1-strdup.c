#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: pointer to the string
 *Return: returns the string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - copy and all
 * @str: pointer to the string
 *Return: char pointer
 */

char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
