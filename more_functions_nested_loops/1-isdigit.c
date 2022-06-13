#include <stdio.h>
#include <ctype.h>
/**
 *_isdigit - checks to see if c is a digit
 *@c: the int being checked
 *Return: returns 1 if c is digit elese 0
 */

int _isdigit(int c)
{
	int i;

	i = isdigit(c);
	if (i == 0)
		return (0);
	else
		return (1);
}
