#include "search_algos.h"

/**
 * adv_bin - recursively search through array
 * @array: pointer to first element
 * @low: left side of array
 * @high: right side of array
 * @value: value to search for
 * Return: index of value or -1 otherwise
 */

int adv_bin(int *array, size_t low, size_t high, int value)
{
	int mid;
	size_t idx;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (idx = low; idx < high; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);
		mid = low + ((high - low) / 2);

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);

		if (array[mid] >= value)
			return (adv_bin(array, low, mid, value));
		else
			return (adv_bin(array, mid + 1, high, value));
	}

	return (-1);
}

/**
 * advanced_binary - function to search through array of integers
 * using recursion
 * @array: pointer to first element in array
 * @size: length of array
 * @value: value to be searched for
 * Return: index of value, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);

	idx = adv_bin(array, 0, size - 1, value);

	return (idx);
}
