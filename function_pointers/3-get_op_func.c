#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"


/**
 * get_op_func - returns the op_function
 * @s: pointer to string (argv)
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		/* printf("i: %d\n", i); */
		i++;
	}

	/* printf("This is the argv passed through: %s\n", s); */
	return (0);
}
