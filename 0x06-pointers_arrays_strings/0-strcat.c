#include "main.h"
/**
 * _strcat - A function that appends string int another
 * Description: The function that is called off by a null byte
 * @dest: An input pointer
 * @src: An input pointer
 *
 * Return:pointer resulting to dest
 */

char *_strcat(char *dest, char *src)
{
	char *point = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (point);
}
