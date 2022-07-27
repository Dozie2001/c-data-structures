#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Print grid integers
 * @grid: A pointer that points to a pointer
 * @height: An int pointer
 *
 * Return: NULL if fails or freed pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
