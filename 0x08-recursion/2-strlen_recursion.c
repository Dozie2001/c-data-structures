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
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
