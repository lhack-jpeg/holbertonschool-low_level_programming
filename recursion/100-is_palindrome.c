#include <stdio.h>

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

	len = _strlen(s);
	if (len == 0)
		return (1);
	return (check_pal(s, 0, len));
}
