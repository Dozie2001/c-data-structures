#include "main.h"
/**
 * print_sign - Print the sign of a value
 * @n: Input value
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int lower;

	if (n > 0)
	{
		lower = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		lower = 0;
		_putchar('0');
	}
	else
	{
		lower = -1;
		_putchar('-');
	}
	return (lower);
}
