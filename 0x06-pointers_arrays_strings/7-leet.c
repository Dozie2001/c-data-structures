#include "main.h"
/**
 * leet - a function encodes string into 1337
 * @s: an input string to code
 * Return: An encode string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char num[10] = {'4', '4', '3', '0', '0', '7', '7', '1', '1'};
	char let[10] = {'A', 'a', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (; j < 10; j++)
			if (s[i] == let[j])
				s[i] = num[j];
		i++;
	}
	return (s);
}
