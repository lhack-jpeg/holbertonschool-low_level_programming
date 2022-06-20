#include <stdio.h>
#include "main.h"
/**
 * issqrt_rec - checks to see recursively for a natural square root
 * @x: the starting number
 * @n: the number checking against
 * return: int
 */

int issqrt_rec(int x, int n)
{
	if (x * x < n && (x + 1) * (x + 1) > n)
		return (-1);
	if (x * x < n)
		return (issqrt_rec(x + 1, n));
	return (x);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number being checked
 *Return: int
 */

int _sqrt_recursion(int n)
{
	return (issqrt_rec(1, n));
}
