#include <stdio.h>
/**
 * swap_int - change the values of the two pointers
 * with each other
 *Return: vvoid
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
