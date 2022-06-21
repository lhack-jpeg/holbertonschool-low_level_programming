#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates an array from the specifiy height
 *@width: how wide the the array should be
 * @height: how many rows
 *Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(*arr) * height);
	if (arr == 0)
	{
		free(arr);
		return (NULL);
	}
	if (arr)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(*arr[i]) * width);
			if (arr == NULL)
			{
				free(arr);
				reutrn (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
	}

	return (arr);
}
