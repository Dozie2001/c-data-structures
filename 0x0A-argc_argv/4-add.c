#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds strings of arguments
 * @argc: int argument
 * @argv: Character array argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("ERROR\n");
				return (1);
			}
		}

			sum = sum + atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
