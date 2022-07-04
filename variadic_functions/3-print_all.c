#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_char - print a char
 * @arg: pointer to arg
 * Return: void
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - print an int
 * @arg: pointer to arg
 * Return: void
 */

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}


/**
 * print_string - print a string
 * @arg: pointer to arg
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_float - print a float
 * @arg: pointer to arg
 * Return: void
 */

void print_float(va_list arg)
{
	double f;

	f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_all - prints the out all data types
 * @format: is a list opf types of arguments passed to func
 * c char
 * i: int
 * f: float
 * s: char*
 * ignore all other types.
 *Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *sep="";

	va_list ptr;
	my_print func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ptr, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(func[j].c)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			func[j].f(ptr);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
