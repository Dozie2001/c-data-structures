#include "main.h"
/**
 * factorial - A function that returns the factorial of numbers
 * @n: Integer value
 * Return: -1 if value is less than 0 or factorial if greater or equals to 0
 */
int factorial(int n)
{
	int r = 0;

	if (n >= 0)
		r = n + factorial(n - 1);
	else
		r = -1;

	return (r);
}
