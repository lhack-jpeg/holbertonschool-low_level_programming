#include <stdio.h>
/**
 *main - Print all digits to 0-16 in hexidecimal
 *
 *Return: always returns 0
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			for (j = 'a'; j <= 'f'; j++)
			{
				putchar(j);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
