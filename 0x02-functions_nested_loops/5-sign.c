#include "main.h"
/**
 * print_sign - checks the sign of an int provided.
 * Description:returns a value depending on the sign given
 * @n: input
 *
 * Return: int
 */
int print_sign(int n)
{
	int j;

	if (n < 0)
	{
		_putchar('-');
		j = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		j = 0;
	}
	else 
	{
		_putchar('+');
		j = 1;
	}

	return (j);
}
