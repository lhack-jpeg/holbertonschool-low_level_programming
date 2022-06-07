#include "main.h"
#include <ctype.h>
/**
 *_isalpha - Checks char and returns value if c is alpha
 *@c: char being checked
 *Return: Returns 1 if c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
		return (1);
	else
		return (0);
}
