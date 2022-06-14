#include <stdio.h>
/**
 * swap_int - change the values of the two pointers
 * with each other
 * @a: first pointer
 * @b: second pointer
 *Return: vvoid
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
