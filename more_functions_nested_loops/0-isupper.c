#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - returns 1 is c is uppercase else returns 0
 * @c: char being checked
 *Return: returns 1 or 0 depending on c
 */

int _isupper(int c)
{
	int i;

	/* isupper returns a non-zero value when c is upper */
	i = isupper(c);
	if (i == 0)
		return (0);
	else
		return (1);
}
