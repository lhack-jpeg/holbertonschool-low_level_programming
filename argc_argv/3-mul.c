#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program to print out the products of the args passed through on a
 * new line
 * @argc: the int value of the argv passed through
 * @argv: the array of values
 *Return: 0 if args are digits, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod = prod * atoi(argv[i]);
	}
	printf("%d\n", prod);

	return (0);
}
