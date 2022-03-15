#include "main.h"
/**
 * jack_bauer - to print all minutes from 00 to 2459
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		int j;

		for (i = 0; i < 10; i++)
		{
			int k;

			for (k = 0; k < 60; k++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				if (k < 10)
				{	_putchar('0');
					_putchar(k);
				}
				else
					_putchar(k);
			}
		}
	}
}
