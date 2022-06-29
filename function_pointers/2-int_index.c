#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function to send elements of array to different functions
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to functions
 * Return: int
 * int index returns the index of the element where the function doesn't
 * return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		if (i == size)
			return (-1);
	}
	return (0);
}
