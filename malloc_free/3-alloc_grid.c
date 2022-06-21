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
	if (arr == NULL)
	{
		/*If top level array fails you don't have to free(arr)*/
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			/**
			 *If the arr[i] fails, no memory is alloc
			 * this means we need to go back one array and
			 * free the previous alloc arrays
			 */
			i = i - 1;
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			/**
			 * after *ptr is freeed
			 * free the **ptr
			 */
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
