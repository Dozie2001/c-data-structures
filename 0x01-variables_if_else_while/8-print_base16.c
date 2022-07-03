#include <stdio.h>
/**
 * main - print in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char m;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
