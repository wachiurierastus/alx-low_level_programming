#include <stdio.h>

/**
 * main - Entry point for writing entire lowercase alphabet except q and e
 *
 * Description - Without q and e
 *
 * Return: 0
 */
int main(void)
{
	int r;

	for (r = 'a' ; r <= 'z' ; r++)
	{
		if (r != 'q' && r != 'e')
		{
			putchar(r);
		}
	}
	putchar('\n');
	return (0);
}
