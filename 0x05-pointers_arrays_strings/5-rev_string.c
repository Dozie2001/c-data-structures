#include "main.h"
/**
 * rev_string - Prints the reverse of a string
 * @s: character Input pointer
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char ax;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		ax = s[i];
		s[i++] = s[len];
		s[len] = ax;
	}
}
