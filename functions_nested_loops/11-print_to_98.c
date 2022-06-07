#include <stdio.h>
/**
 *print_to_98 - function to print all numbers from n to 98
 *@n: is starting point to count 98
 *Return: returns northing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
