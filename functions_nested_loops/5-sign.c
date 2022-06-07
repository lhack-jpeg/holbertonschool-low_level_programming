#include "main.h"
/**
 *print_sign - Function to return +, 0, - depending if positive or negative
 *@n: the int being test
 *Return: returns 1, 0  or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
