#include <stdio.h>
#include "main.h"
/**
 * print_line - function to print a line depending on int entered
 * @n: determines line lenth
 *Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
