#include "main.h"
/**
 *_isupper - Checks if ALphabet is lower
 *@c: Input value
 *Return: value
 */

int _isupper(int c)
{
	int i;
	int value;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			value = 1;
			break;
		}
		else
		{
			value = 0;
			break;
		}
	}
	return (value);
}
