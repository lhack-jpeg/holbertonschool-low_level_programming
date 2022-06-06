#include <stdio.h>
/**
 *main - Function to print numbers 0-9
 *
 *Return: always returns 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
