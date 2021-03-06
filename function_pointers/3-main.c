#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - returns the value of the two numbers passed and the operand
 * @argc: the amount of args passed
 * @argv: the value of the arg
 *Return: int
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int num1, num2, result, (*func)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* printf("%s: argv[2]\n", s); */
	/* printf("Num1: %d, num2: %d\n", num1, num2); */
	func = get_op_func(s);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
