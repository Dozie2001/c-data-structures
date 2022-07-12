#include "main.h"
/**
 * swap_int - A function that swaps the values of two
 * @a: Input Pointer
 * @b: Integer Input value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
