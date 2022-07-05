#include "main.h"
/**
 * _islower - Checks if the variable is in cap or small letter
 * @c: an input character
 * Description - a FUnction that returns 1 if variable is small letter
 * Return:1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	int i;
	int m = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			m = 1;
	}
	return (m);
}
