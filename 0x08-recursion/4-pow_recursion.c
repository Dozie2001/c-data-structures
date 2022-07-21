#include "main.h"
/**
 * _pow_recursion - a function that raises to the power of a value
 * @x: Integer value
 * @y: Intger value
 * Return:Return power of value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
