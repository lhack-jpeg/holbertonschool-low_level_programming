#include <stdio.h>
/**
 * print_array - prints n elements of the array
 * @a: array
 * @n: number of elements
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/*prints the array from the index*/
		printf("%d", a[i]);
		/*Checks to see if the index is less than last*/
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
