#include "main.h"

/**
 * alloc_grid - makes 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr = malloc(sizeof(int *) * height), i, j;

	if (width < 1 || height < 1)
		return (NULL);


	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
