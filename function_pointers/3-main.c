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
	int num1, num2, result;
	char *s;

	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%s: argv[2]\n", s);
	printf("Num1: %d, num2: %d\n", num1, num2);
	result = get_op_func(s)(num1, num2);
	printf("Result: %d\n", result);

	return (0);
}
