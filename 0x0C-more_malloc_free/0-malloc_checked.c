#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Unsigned intger pointer
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);

	return (d);
}
