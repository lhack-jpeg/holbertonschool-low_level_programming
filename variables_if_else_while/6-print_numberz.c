#include <stdio.h>
/**
 *main - print numbers 0-9 using putchar
 *
 *Return: always returns 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
