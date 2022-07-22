#include "main.h"
int prime_check(int factor, int prime_num);
/**
 * is_prime_number - Checks if value is a prime number
 * @n: Value to be checked if it is a possible prime number
 *
 * Return: 1 if input is a prime number,
 * Otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n < 2)
		return (0);

	return (prime_check(2, n));
}

/**
 * prime_check - Checks if 'prime_num' is divisible by
 * 'factor'
 * @factor: It is a factor
 * @prime_num: Posssible prime number
 *
 * Return: 1 if a prime number and 0 if not
 */
int prime_check(int factor, int prime_num)
{
	if (prime_num % factor == 0)
		return (0);
	if (factor == prime_num / 2)
		return (1);
	return (prime_check(factor + 1, prime_num));
}
