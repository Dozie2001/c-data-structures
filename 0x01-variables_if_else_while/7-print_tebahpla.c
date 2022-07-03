#include <stdio.h>
/**
 * main - Print out the reverse of the alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');

	return (0);
}
