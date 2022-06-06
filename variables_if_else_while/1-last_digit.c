#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function to get the last digit and check against the parameters
 *
 * Return: alwasy returns 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	} else if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	} else
	{
		printf("%d and is zero\n", lastDigit);
	}
	return (0);
}
