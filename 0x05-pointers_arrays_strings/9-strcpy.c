#include "main.h"
/**
 * _strcpy - A function that copies a string into another
 * @dest: Input value
 * @src: Input Pointer
 * Return: ax
 */
char *_strcpy(char *dest, char *src)
{
	char *ax = dest;

	while (*src)
		*dest++ = *src++;

	return (ax);
}
