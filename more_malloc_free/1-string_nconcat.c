#include <stdio.h>
#include <stdlib.h>

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
 * string_nconcat - concats two strings together
 * @s1: pointer to str 1
 * @s2: pointer to str 2
 * @n: how bytes to use
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, j, str1len, str2len, totallen;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	str1len = _strlen(s1);
	str2len = _strlen(s2);
	if (str2len > n)
		str2len = n;

	totallen = str1len + str2len;

	dest = malloc(sizeof(*dest) * totallen + n);
	if (dest == NULL)
		return (NULL);

	i = 0;
	while (i < str1len)
	{
		dest[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < totallen)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
