#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet ten times on new line
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	/* The loop to count the lines */
	for (i = 0; i < 10; i++)
	{
		/*The loop to print out the alphabets */
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
