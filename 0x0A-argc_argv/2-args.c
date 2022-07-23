#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives
 * @argc: Int argument
 * @argv: Character argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
