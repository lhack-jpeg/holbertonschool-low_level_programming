#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to the name
 * @f: pointer the function
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
