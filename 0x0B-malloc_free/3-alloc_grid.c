#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **biDim;
	int i, j;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	biDim = malloc(height * sizeof(int *));

	if (biDim == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		biDim[i] = malloc(sizeof(int) * width);
		if (biDim[i] == NULL)
		{
			while (i >= 0)
			{
				free(biDim[--i]);
			}
			free(biDim);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			biDim[i][j] = 0;
		}
	}
	return (biDim);
}
