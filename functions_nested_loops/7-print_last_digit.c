#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - function to return the value of the last digit
 *@n: the int being checked
 *Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int i = (n % 10);

	if (i < 0)
		i = i * -1;

	_putchar(i + '0');
	return (i);
}
