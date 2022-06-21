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
	int i, k, j, l;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	i = _strlen(s1);
	k = _strlen(s2);

	dest = malloc(sizeof(char) * i + sizeof(char) * k + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	l = 0;
	while (j < i + k)
	{
		if (j < i)
			dest[j] = s1[j];
		else
			dest[j] = s2[l++];
		j++;
	}
	return (dest);
}
