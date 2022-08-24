#include "search_algos.h"

/**
 * linear_search - function to check if a value exists in an array
 * searches linearly
 * @array: pointer to start of array
 * @size: size/length of array
 * @value: value to be searched for
 *Return: index of the array where value is stored, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
