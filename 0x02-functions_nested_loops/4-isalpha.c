#include "main.h"
/**
 * _isalpha - Checks if variable is an alpahbet and returns 1
 * @c: Input value
 * Return: 1 if alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	int cap;
	int small;
	int n = 0;

	for (small = 'a'; small <= 'z'; small++)
	{
		for (cap = 'A'; cap <= 'Z'; cap++)
		{
			if (cap == c || small == c)
				n = 1;
		}
	}
	return (n);
}
