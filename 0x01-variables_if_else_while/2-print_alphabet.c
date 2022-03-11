#include <stdio.h>

/*
 * Main -entry point/.
 *
 * Description - prints"abcdefghijklmnopqrstuvwxyz"
 *
 * Return (0);
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
