#include "main.h"
/**
 *_puts - Check the code
 *@str: Int counter
 *Return: Always void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
