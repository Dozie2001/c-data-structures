#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 *  to a 2 dimensional array of integers
 *  @height: Int value for the height
 *  @width: Int value for the width
 *
 *  Return: pointer to 2D array or NULL if progarm fails
 */
int **alloc_grid(int width, int height)
{
	int **array, h = 0, w = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	while (h < height)
	{
		array[h] = (int *)malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			free(array);
			return (NULL);
		}
		h++;
	}
	for (h = 0; h < height; h++)
	{
		for (; w < width; w++)
			array[h][w] = 0;
	}
	return (array);
}
