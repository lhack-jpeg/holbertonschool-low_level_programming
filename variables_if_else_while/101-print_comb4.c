#include <stdio.h>
/**
 *main - print out the different combinations of integers
 *
 *Return: always returns 01
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = '0';
	while (i <= '7')
	{
		j = (i + 1);
		while (j <= '8')
		{
			k = (j + 1);
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
