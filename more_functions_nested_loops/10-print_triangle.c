#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle dependent on size
 * @size: determines size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int i, k, l;

	if (size > 0)
	{
		i = 0;
		/*Loop to determine length of line*/
		while (i < size)
		{
			/*Work out how many . and # to print*/
			for (k = (size - i - 1); k > 0; k--)
				_putchar(' ');
			for (l = 0; l <= i; l++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}

	else
		_putchar('\n');
}
