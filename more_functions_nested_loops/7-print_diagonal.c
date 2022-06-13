#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - prints out '\' followed by '\n'
 * lines are indented further with white space depending on size of n
 *Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		/*run loop for value of n*/
		while (i < n)
		{
			j = 0;
			/*Loop to add more whitespace*/
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
