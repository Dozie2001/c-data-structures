#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: Input pointer
 * @s2: Input Pointer
 * Return: NULL on failure or pointer that points to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, l1 = 0, l2 = 0, counter_sum = 0;
	char *str1, *str2, *new;

	if (s1 == NULL)
		s1 = " ";
	str1 = s1;
	str2 = s2;
	while (s1[l1])
		l1++;
	s1 = str1;
	if (s2 == NULL)
		s2 = " ";
	while (s2[l2])
		l2++;

	s2 = str2;
	counter_sum = l1 + l2 + 1;
	new = malloc(sizeof(char) * counter_sum);
	str1 = new;
	if (new == NULL)
		return (NULL);
	for (; i < (counter_sum - 1); i++)
	{
		if (i < l1)
			new[i] = s1[i];
		else
			new[i] = s2[i - l1];
	}
	new[i] = '\0';
	return (new);
}
