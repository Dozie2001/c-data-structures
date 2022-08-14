#include <stdio.h>

/* Use Constructor in C */
void main_constructor(void) __attribute__((constructor));

/**
 * main_constructor - A constructor function that prints a message
 * before main runs
 * Return: Northing
 */

void main_constructor(void)
{
	printf("You'e beat! and yet,you must allow,\n");
	printf("I bore my house upon my back!\n");
}
