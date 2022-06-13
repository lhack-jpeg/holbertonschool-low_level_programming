#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 via _putchar while skipping 2 & 4
 *
 *Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (!(i == '2' || i == '4'))
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
