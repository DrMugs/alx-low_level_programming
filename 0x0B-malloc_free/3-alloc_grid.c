#include <stdlib.h>
#include "main.h"

/**
 * *alloc_grid - create two dimensional array
 * @width: arry width
 * @height: height
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	mat = (int **) malloc(sizeof(int *) * height);

	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(mat + i) = (int *) malloc(sizeof(int) * width);
		if (*(mat + i) == NULL)
		{
			free(mat);
			for (j = 0; j <= i; j++)
				free(mat[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}

