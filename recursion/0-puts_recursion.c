#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - A recursive function to print out a string
 * @s: pointer to string
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
