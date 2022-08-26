#include "search_algos.h"

/**
 * b_search - binary search through a sorted array
 * @array: pointer to first element in the array
 * @low: left side of array
 * @high: right side of array
 * @value: value to search for
 *Return: index of value or -1 otherwise
 */

int b_search(int *array, int low, int high, int value)
{
	int idx, mid;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (idx = low; idx < high; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);

		if (value == array[low + 1])
			return (low + 1);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - search through a sorted array using an exponential step
 * search algorithm
 * @array: pointer to first element in array
 * @size: size/length of array
 * @value: value to search for
 * Return: index of value , -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	int idx;
	size_t step = 1;

	if (array == NULL)
		return (-1);

	while (step < size)
	{
		if (array[step] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       step / 2, step - 1);
			idx = b_search(array, step / 2, step - 1, value);
			return (idx);
		}
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		step *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	       step / 2, step - 1);
	idx = b_search(array, step / 2, step - 1, value);
	return (idx);
}
