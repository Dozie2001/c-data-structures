#include "main.h"
/**
 * print_rev - Prints the reverse of a string
 * @s: Charcter input pointer
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		break;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
