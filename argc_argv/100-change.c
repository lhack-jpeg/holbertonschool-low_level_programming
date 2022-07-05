#include <stdio.h>
#include <stdlib.h>
/**
 *main - function to prints the minimum number of coins to make change
 * @argc: count of args passed through
 * @argv: the value of the args
 *Return: int
 */

int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int i = 0, change, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
		printf("%d\n", count);
	while (change >= 0 && coin[i])
	{
		if (change >= coin[i])
		{
			change = change - coin[i];
			count++;
		}
		else
			i++;
		if (change == 0)
			break;
		/**
		 *printf("change:%d\ncount:%d\ncoin:%d\n",
		 *    change,
		 *     count,
		 *     coin[i]);
		 */
	}
	printf("%d\n", count);
	return (0);
}
