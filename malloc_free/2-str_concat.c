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
 * str_concat - concatenates two strings together
 * @s1: pointer to the string
 * @s2: pointer to string
 *Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, j, k;

	if (s1 == NULL)
		*s1 = '\0';

	if (s2 == NULL)
		*s2 = '\0';

	i = _strlen(s1);
	k = _strlen(s2);

	dest = malloc(sizeof(char) * i + sizeof(char) * k + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	while (s1[j] != '\0')
	{
		dest[j] = s1[j];
		j++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		dest[i + j] = s2[j];
		j++;
	}

	dest[j + i] = '\0';

	return (dest);
}
