#include <stdlib.h>
#include <time.h>
/**
 * main - function to check whether n is postive, negative or zero
 *
 * Return: returns 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	{
		printf("%d is positive");
	} else if ( n < 0 )
	{
		printf("%d is negative");
	} else
	{
		printf("%d is zero");
	}
	return (0);
}
