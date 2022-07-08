#include "main.h"
/**
 * _isdigit - Check if a digit
 * @c: input Value
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i == c)
			return (1);
		else
			return (0);
}
