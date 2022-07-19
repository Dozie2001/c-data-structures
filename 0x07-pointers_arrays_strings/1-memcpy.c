#include "main.h"
/**
 *  _memcpy - Copies n bytes from memory area src to memory dest
 *  @n: Int input pointer
 *  @src: char input pointer
 *  @dest: char input pointer
 *  Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
