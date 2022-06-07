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

	i = '0';
	while (i < '9')
	{
		j = (i + 1);
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
