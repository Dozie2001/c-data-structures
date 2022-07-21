#include "main.h"
/**
 * factorial - A function that returns the factorial of numbers
 * @n: Integer value
 * Return: -1 if value is less than 0 or factorial if greater or equals to 0
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
