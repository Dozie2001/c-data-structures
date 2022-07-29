#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - a function that creates an array of integers
 *@min: minimum number to start
 *@max: maximum number to end
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *new, i = 0, n;

	if (min > max)
		return (NULL);
	n = max - min;

	new = malloc(sizeof(int) * (n + 1));
	if (new == NULL)
		return (NULL);

	for (; i <= n; i++)
		new[i] = min++;
	return (new);
}
