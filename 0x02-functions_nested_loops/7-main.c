#include "main.h"

/**
 * main - Calls the function that prints the values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	print_last_digit(98);
	print_last_digit(0);
	n = print_last_digit(-1044);
	_putchar('0' + n);
	_putchar('\n');
	return (0);
}
