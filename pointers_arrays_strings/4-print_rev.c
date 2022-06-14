#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string being passed through
 *Return: void
 */

void print_rev(char *s)
{
	int len, i;


	len  = strlen(s);
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
