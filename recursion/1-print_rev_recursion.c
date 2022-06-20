#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - recursive function to print out a string
 * in reverse
 * @s: pointer to string
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
