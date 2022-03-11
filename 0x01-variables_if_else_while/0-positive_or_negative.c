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
		puts(n " is negative");
	}
	else if (n == 0)
	{
		puts(n " is zero");
	}
	else
		puts(n "is positive)
	return (0);
}
