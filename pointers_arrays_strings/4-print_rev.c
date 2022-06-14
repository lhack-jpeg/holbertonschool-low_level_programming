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

	/*Get length of str*/
	len  = strlen(s) - 1;
	/*Sart loop at end of index and go backwards*/
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
