#include <stdio.h>
/**
 * print_diagsums - print the diagonal sums of a matrix
 * @a: the matrix being passed
 * @size: the size of the matrix
 *Return:
 */

void print_diagsums(int *a, int size)
{
	int i, j, ptr, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		/*This finds the pointer for the element in the array*/
		ptr = (i * size) + i;
		sum_1 = sum_1 + *(a + ptr);
	}
	for (j = 0; j < size; j++)
	{
		/*Find the pointer starting from the other corner*/
		ptr = (j * size) + (size - j - 1);
		sum_2 = sum_2 + *(a + ptr);
	}
	printf("%d, %d\n", sum_1, sum_2);
}
