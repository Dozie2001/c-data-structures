#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: Int argument
 * @argv: char argument array
 * Return: Always 1 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc >= 3)
	{
		for (; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	return (0);
}
