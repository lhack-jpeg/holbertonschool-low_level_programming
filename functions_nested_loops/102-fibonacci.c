#include <stdio.h>
/**
 *main - a program that returns the first 50 numbers
 * of the fibonacci sequence
 *Return: always returns 0
 */

int main(void)
{
	int i = 0;
	unsigned long int fib_num = 0;
	long int number_1 = 1;
	long int number_2 = 2;

	while (i < 50)
	{
		fib_num = number_1 + number_2;
		printf("%lu ,", fib_num);
		number_1 = number_2;
		number_2 = fib_num;
		i++;
	}
	putchar('\n');

	return (0);
}
