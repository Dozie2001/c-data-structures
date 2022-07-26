#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - A function that copies a strings as a parameter
 *@str : An Input pointer
 *Return: A pointer or Null if memory is less than string
 */

char *_strdup(char *str)
{
	char *new, *start;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;

	new = malloc(sizeof(char) * (len + 1));
	start = new;

	if (new != NULL)
	{
		for (; i < len; i++)
		{
			new[i] = *str;
			str++;
		}
		new[i] = '\0';
		return (start);
	}

	else
		return (NULL);
}
