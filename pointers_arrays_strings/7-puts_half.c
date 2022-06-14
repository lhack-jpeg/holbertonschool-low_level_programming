#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints the char from the second half of string
 * @str: str being passed through
 *Return: void
 */

void puts_half(char *str)
{
	int i, len;

	/*get len of str for loop*/
	len  = strlen(str);

	for (i = 0; i < len; i++)
	{
		/*check if i passes len / 2*/
		if (i > (len - 1) / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
