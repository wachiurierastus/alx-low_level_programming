#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 *main - Entry point into the program
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative ", n);
	}
	else if (n == 0)
	{
		printf("%d is zero ", n);
	}
	else
		printf("%d is positive ", n);
	return (0);
}
