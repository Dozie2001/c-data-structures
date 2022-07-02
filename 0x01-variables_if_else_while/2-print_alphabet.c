#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main entry - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
