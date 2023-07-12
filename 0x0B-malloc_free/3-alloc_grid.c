#include "main.h"

/**
 * alloc_grid - main function
 * @width: input1
 * @height: input2
 * Retrun: the matrix
*/

int **alloc_grid(int width, int height)
{
	int **mat, i, j;

	mat = malloc(sizeof(*mat) * height);

	if (width <= 0 || height <= 0 || mat == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mat[i] = malloc(sizeof(**mat) * width);
			if (mat[i] == 0)
			{
				while (i--)
					free(mat[i]);
				free(mat);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				mat[i][j] = 0;
		}
	}
	return (mat);
}
