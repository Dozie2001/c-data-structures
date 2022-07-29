#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: memory space alloted
 * @size: size of nmemb
 *
 * Return: A pointer to space or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	for (; i < sizeof(space); i++)
		*(space + i) = 0;

	return (space);
}
