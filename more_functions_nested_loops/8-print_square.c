#include <stdio.h>
#include "main.h"
/**
 * print_square - function to print a square of '#' dependant on 'size' using
 * _putchar
 * @size: value of size of 'square'
 *Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
