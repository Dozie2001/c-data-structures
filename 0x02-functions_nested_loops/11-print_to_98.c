#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural numbers to 98
 * @n: Input value
 * Return: Nothing
 */
void print_to_98(int n)
{
	int r;

	if (n <= 98)
	{
		for (r = n; r <+ 98; r++)
		{
			printf("%d", r);

			if (n == 98)
				continue;
			printf(", ");
		
		}
		_putchar('\n');
	}
	else
	{
		for (r = n; r >= 98; r--)
		{
			printf("%d", r);

			if (n == 98)
				continue;
			printf(", ");
		}
		_putchar('\n');
	}
}

			

