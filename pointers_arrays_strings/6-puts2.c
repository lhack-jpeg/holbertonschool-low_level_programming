#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints out the first character then every other one
 * @str: string being passed
 *Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
