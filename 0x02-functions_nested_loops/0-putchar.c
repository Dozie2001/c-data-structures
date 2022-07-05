#include <unistd.h>
#include "main.h"
/**
 * main - Prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";

	_putchar(word[0]);
	_putchar(word[1]);
	_putchar(word[2]);
	_putchar(word[3]);
	_putchar(word[4]);
	_putchar(word[5]);
	_putchar(word[6]);
	_putchar(word[7]);
	_putchar('\n');

	return (0);
}
