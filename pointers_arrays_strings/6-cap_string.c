#include <stdio.h>
#include "main.h"

/**
 *check_sep - function to check if the char is a separator
 * @s: the character being passed
 * Return: 1 if char is a separator 0 other wise
 */
int check_sep(char s)
{
	int separator[] = {',', ';', '.', '!', '?', '"', ' ', '\t', '\n',
			   '(', ')', '{', '}'};
	int n = sizeof(separator) / sizeof(int);
	int i;

	i = 0;
	while (i < n)
	{
		if (s == separator[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - function to capitalise all words in the string
 * @str: string being passed through
 *Return: char
 */
char *cap_string(char *str)
{
	int i;

	i = 1;
	/*Run loop until null char*/
	while (str[i] != '\0')
	{
		/*If lower case char, check char before for separator*/
		if (str[i] > 'a' && str[i] < 'z' && check_sep(str[i - 1]) == 1)
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
