#include "main.h":
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A FUunction that creates an array of chars
 * @c: A character integer
 * @size: An integer
 *
 * Return: Null if size is 0 or a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL)
	if (p == NULL)
		return (NULL);

	for (; i < size; i++)
		s[i] = c;
	return (s);
}
