#include "main.h"

/**
 * binary_to_unit - A fiction that converts binary number
 * to an unsigned intger
 * @b: A pointer to binary string
 * Return: unsigned intger converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, results = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			results += base;
		base *= 2;
		len--;
	}
	return (results);
}
