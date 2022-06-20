#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Prints the power of ints given
 * @x: integer that is passed
 * @y: the integer we are raising the power by
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
