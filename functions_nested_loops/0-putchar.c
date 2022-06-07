#include "main.h"
#include <string.h>
/**
 *main - Function to print _putchar
 *
 *Return: always returns 1
 */

int main(void)
{
	char str1[] = "_putchar";
	int len = strlen(str1);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str1[i]);
	}
	_putchar('\n');

	return (0);
}
