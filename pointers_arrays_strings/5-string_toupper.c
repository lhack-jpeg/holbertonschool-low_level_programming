#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - function to capitalise all letters in the string
 * @str: string being passed through
 *Return: char
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96)
			str[i] = (str[i] - 32);
		else
			str[i] = (str[i]);
		i++;
	}

	return (str);
}
