#include "search_algos.h"

/**
 * binary_search - binary search through a sorted array
 * @array: pointer to first element in the array
 * @size: size/length of array
 * @value: value to search for
 *Return: index of value or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int idx, mid, low = 0, high;

	if (array == NULL)
		return (-1);

	high = size - 1;
	while (high >= low)
	{
		printf("Searching in array: ");
		for (idx = low; idx < high; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
