#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function returns a pointer to a 2D array of integers.
 * @width: width of the wanted array
 * @height: height of the wanted array
 * Return: a pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr, a, b;
	int size = width * height;

	if (size <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = (int *)malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(arr[a]);
			free(arr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	return (arr);
}
