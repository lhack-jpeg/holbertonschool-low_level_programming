#include "main.h"
/**
 * jack_bauer - print the time for every minute and hour combination
 *
 * return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = '0';
	while (i < '3')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k < '6')
			{
				l = '0';
				while (l <= '9')
				{
					if (i <= '2' && j < '4')
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
