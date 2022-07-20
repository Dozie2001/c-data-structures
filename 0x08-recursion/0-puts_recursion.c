#include "main.h"

/**
 * _puts_recursion - A function that prints the truth
 * @s: iNPUT POINTER
 *
 * Return: Nothing
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
