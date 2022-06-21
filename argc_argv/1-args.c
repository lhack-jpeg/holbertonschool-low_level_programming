#include <stdio.h>
/**
 * main - function to print out the number of args passed through
 * @argc: the number of args passed
 * @argv: the array of args
 * Return: always 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
