#include <ctype.h>
/**
 *_islower - checks to see if c is lowercase
 * c is the char being checked
 *Return: 1 if c is lower or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
