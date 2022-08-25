#include "search_algos.h"

/**
 * array_search - search a sorted array using the interpolation method
 * recursively
 * @array: pointer to first element in array
 * @low: left side of array
 * @hi: right side of array
 * @value: value to search for in array
 * Return: index of value, -1 otherwise
 */


int array_search(int *array, size_t low, size_t hi, int value)
{
	size_t pos = low + (((double)(hi - low) / (array[hi] - array[low]))
			     * (value - array[low]));

	if (pos > hi)
		printf("Value checked array[%ld] is out of range\n", pos);

	if (low <= hi && value >= array[low] && value <= array[hi])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);

		if (array[pos] < value)
			return (array_search(array, pos + 1, hi, value));

		if (array[pos] > value)
			return (array_search(array, low, pos - 1, value));
	}
	return (-1);
}

/**
 * interpolation_search - search a sorted array using the interpolation method
 * @array: pointer to first element in array
 * @size: size/length of array
 * @value: value to search for in array
 *Return: index of value, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);

	idx = array_search(array, 0, size - 1, value);

	return (idx);
}
