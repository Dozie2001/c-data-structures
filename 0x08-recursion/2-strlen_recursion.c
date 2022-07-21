#include "main.h"
/**
 *  _strlen_recursion - A function that counts a string
 *  @s: A character pointer
 *  Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		int n = 1 + _strlen_recursuion(s + 1);

		return (n);
	}

	return (0);
}
