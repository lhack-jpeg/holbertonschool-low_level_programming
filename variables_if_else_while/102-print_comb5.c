#include <stdio.h>
/**
 *main - prints out total combinations for 0 - 9 in double combinations
 *
 *Return: 0
 */

int main(void)
{
	int a, i;

	a = 0;
	while (a < 99)
	{
		i = a + 1;
		while (i < 100)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}

		a++;
	}
	putchar('\n');
	return (0);
}
