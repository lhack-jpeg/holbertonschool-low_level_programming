#include <stdio.h>
/**
 *main - fizzbuzz, programs counts to 100 and prints of fizz if number is
 * divisible by 3, prints out buzz if divisible by 5 and fizzbuzz if
 * divisible by both
 *Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
