#include <stdio.h>
/**
 * main - A program that prints it's name
 * @argc: the count of args passed through
 * @argv: the arrays of args passed through
 *Return: 0
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
