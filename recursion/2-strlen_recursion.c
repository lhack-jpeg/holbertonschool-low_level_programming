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
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
