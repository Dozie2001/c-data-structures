#include "main.h"
/**
 * print_last_digit - A function that print the last digit it is given
 * @n: An input integer
 * Return:Last Digit of n
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;

	_putchar((r % 10) + '0');
	return (r % 10);
}

