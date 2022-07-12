#include "main.h"
/**
* _strlen - Calculates the length of a string
*@s: Input Pointer
*Return: Nothing
*/
int  _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
