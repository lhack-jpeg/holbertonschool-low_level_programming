#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 0 - 14 via _putchar
 *
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	j = '0';
	/*Loop to run 10 times*/
	while (j <= '9')
	{
		/* Loop to print 0 - 14 */
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
