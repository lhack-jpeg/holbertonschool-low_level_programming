#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_alpha - Checks if the pointer is a char
 * @s: the pointer to the string
 * Return: 1 if alpha, 0 other
 */

int check_alpha(char *s)
{
	/*Iterates over the pointer and checks if alpha*/
	while (*s != '\0')
	{
		if (isalpha(*s))
			return (1);
		s++;
	}
	return (0);
}


/**
 * main - A program to print out the sum of the args passed through on a
 * new line
 * @argc: the int value of the argv passed through
 * @argv: the array of values
 *Return: 0 if args are digits, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	/*If argv just file name return and print 0*/
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/*Send to function above as it is a pointer*/
			if (check_alpha(argv[i]) == 1)
			{
				/*Return error state if argv[i] is alpha*/
				printf("Error\n");
				return (1);
			}
			/*Add the value of argv[i] after casting to int*/
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
