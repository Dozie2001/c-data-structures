#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
*
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Checking n is negative */
if (n < 0)
printf("%d is negative\n", n);

/*Checking n is positive*/
else if (n < 0)
printf("%d is positive\n", n);

/*Checking n is 0*/
else	 
printf("0 is zero\n");

return (0);
}
