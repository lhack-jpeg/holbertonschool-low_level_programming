#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - find the strlen recursively
 * @s: pointer to the string
 *Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if a string is a palindrome
 * @s: pointer to string
 * @index: index of element on string
 * @len: len of string
 * Return: int, 1 if true, 0 otherwise
 */

int check_pal(char *s,int index, int len)
{
	int end = len - index - 1;
	if (index == (len / 2))
		return (1);
	if (s[index] != s[end])
		return 0;
	return (check_pal(s, index + 1, len));
}

/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the pointer to the string
 *Return: int, 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	return (check_pal(s, 0, len));
}
