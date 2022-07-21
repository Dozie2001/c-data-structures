#include "main.h"
int _sqrt(int num, int sqr);
/**
 * _sqrt_recursion - A function that returns the square root
 * @n: The square  number
 * Return: square root or  -1 if square root is less than 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - Finds the square root
 * @num: Int value to be returned if squareroot
 * @sqr: The squared value
 * Return: num or -1
 */

int _sqrt(int num, int sqr)
{
	if (num > sqr)
		return (-1);
	else if (num * num == sqr)
		return (num);
	return (_sqrt(num + 1, sqr));
}
