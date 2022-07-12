#include "main.h"
/**
 * rev_string - Prints the reverse of a string
 * @s: character Input pointer
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
	{
		--len;
		s[len];
	}
}
