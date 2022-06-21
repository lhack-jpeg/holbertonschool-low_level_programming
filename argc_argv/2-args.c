#include <stdio.h>
/**
 * main - A program to print out the args passed through on a new line
 * @argc: the int value of the argv passed through
 * @argv: the array of values
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
