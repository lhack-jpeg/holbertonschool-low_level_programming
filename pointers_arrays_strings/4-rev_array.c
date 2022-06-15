#include <stdio.h>
/**
 * reverse_array - reverse an array
 * @a: the array being reversed
 * @n: the elements in the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n - 1; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
